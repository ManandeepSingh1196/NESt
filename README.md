# 🕹️ NESt - A NES Emulator

███╗ ██╗███████╗███████╗<br>
████╗ ██║██╔════╝██╔════╝<br>
██╔██╗ ██║█████╗ ███████╗<br>
██║╚██╗██║██╔══╝ ╚════██║<br>
██║ ╚████║███████╗███████║<br>
╚═╝ ╚═══╝╚══════╝╚══════╝<br>
Emulator (WIP)

A work-in-progress Nintendo Entertainment System (NES) emulator written in C++, with immense help from [OneLoneCoder’s NES Emulator guide](https://www.youtube.com/playlist?list=PLrOv9FMX8xJEnQ6p2VUV7TL4pjaK6nK8n) and the [NESDev Wiki](https://www.nesdev.org/wiki/Nesdev_Wiki).

Currently implemented up through the **PPU** stage, capable of rendering backgrounds, tiles, and basic graphics output.

---

## ✨ Features So Far
- ✅ **6502 CPU core** – full instruction set with cycle accuracy  
- ✅ **Memory bus** – CPU <-> PPU/Cartridge communication  
- ✅ **Cartridge loading** – basic iNES ROM parsing, mapper 0 support  
- ✅ **PPU pipeline (work in progress)** – background rendering, tiles, nametables  
- ✅ **Debugging tools** – disassembler, CPU step-through  
- ⏳ **Upcoming** – sprite rendering, advanced mappers, audio (APU), input handling  
