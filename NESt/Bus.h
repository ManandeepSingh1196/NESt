#pragma once

#include <cstdint>
#include <array>

#include "nes6502.h"
#include "nes2C02.h"
#include "Cartridge.h"

class Bus
{
public: //Constructor and Destructor
	Bus();
	~Bus();

public : //Devices on the Bus

	nes6502 cpu;
	nes2C02 ppu;
	std::array<uint8_t, 2048> cpuRam; 

	std::shared_ptr<Cartridge> cart;

private:
	// A count of how many clocks have passed
	uint32_t nSystemClockCounter = 0;

public : //Setting up the read and write functions

	void cpuWrite(uint16_t address, uint8_t data);				//write() takes a 16-bit address and 8-bit data instruction
	uint8_t cpuRead(uint16_t address, bool readOnly = false);	//read() takes a 16-bit address as well along with a boolean flag	

	void insertCartridge(const std::shared_ptr<Cartridge>& cartridge);
	void reset();
	void clock();
};