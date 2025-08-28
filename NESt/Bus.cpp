#include "NES.h"
#include "Bus.h"


Bus::Bus()
{
	//clearing the RAM
	for (auto& i : cpuRam) i = 0x00;

	//connecting CPU to the Bus
	cpu.ConnectBus(this);
}

Bus::~Bus()
{
}

void Bus::cpuWrite(uint16_t address, uint8_t data)
{

	if (address >= 0x0000 && address <= 0x1FFF)										//setting up the range of the bus/ram
	{
		cpuRam[address & 0x07FF] = data;
	}
	else if (address >= 0x2000 && address <= 0x3FFF)
	{
		ppu.cpuWrite(address & 0x0007, data);
	}
}

uint8_t Bus::cpuRead(uint16_t address, bool readOnly)
{	
	uint8_t data = 0x00;

	if (address >= 0x0000 && address <= 0x1FFF)										//setting up the range of the bus/ram
	{
		data = cpuRam[address & 0x07FF];
	}
	else if (address >= 0x2000 && address <= 0x3FFF)
	{
		data = ppu.cpuRead(address & 0x0007, readOnly);
	}

	return 0x00;
}

void Bus::reset()
{
	cpu.reset();
	nSystemClockCounter = 0;
}

void Bus::clock()
{
	ppu.clock();

	if (nSystemClockCounter % 3 == 0)
	{
		cpu.clock();
	}

	nSystemClockCounter++;
}

void Bus::insertCartridge(const std::shared_ptr<Cartridge>& cartridge)
{
	// Connects cartridge to both Main Bus and CPU Bus
	this->cart = cartridge;
	ppu.ConnectCartridge(cartridge);
}