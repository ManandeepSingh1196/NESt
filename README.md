

```
███╗   ██╗███████╗███████╗████████╗
████╗  ██║██╔════╝██╔════╝╚══██╔══╝
██╔██╗ ██║█████╗  ███████╗   ██║
██║╚██╗██║██╔══╝  ╚════██║   ██║
██║ ╚████║███████╗███████║   ██║
╚═╝  ╚═══╝╚══════╝╚══════╝   ╚═╝
     /\        /\        /\
    /__\      /__\      /__\
   /_\/_\    /_\/_\    /_\/_\

```

# NESt — Nintendo Entertainment System Emulator

**NESt** is a work-in-progress **Nintendo Entertainment System (NES)** emulator written in **C++**.
This project is primarily educational, built to understand the NES hardware at a low level while maintaining a clean and extensible emulator architecture.

---

## Features

### Implemented

* Complete 6502 CPU implementation with accurate instruction behavior
* CPU memory bus connecting RAM, PPU, and cartridge
* iNES ROM loading and header parsing
* Mapper 0 (NROM) support
* Partial PPU implementation for background rendering
* CPU debugging tools including disassembly and step execution

### In Progress

* Sprite rendering and OAM logic
* APU (audio processing unit)
* Controller input
* Additional cartridge mappers
* Timing and synchronization improvements

---

## Building the Project

### Requirements

* C++17 compatible compiler (GCC, Clang, or MSVC)
* CMake 3.15 or newer
* A `.nes` ROM file for testing

### Build Steps

```bash
git clone https://github.com/ManandeepSingh1196/NESt.git
cd NESt
mkdir build
cd build
cmake ..
make
```

### Running

```bash
./NESt path/to/rom.nes
```

---

## Project Structure

* `cpu/` — 6502 CPU core and instruction definitions
* `ppu/` — NES Picture Processing Unit logic
* `bus/` — Memory bus and device routing
* `cartridge/` — ROM loading and mapper logic
* `debug/` — Disassembler and step tools

The design keeps components decoupled so future features like new mappers or audio can be added cleanly.

---

## References

* OneLoneCoder NES Emulator Series
* NESDev Wiki and documentation

These resources heavily influence design decisions and implementation details.

