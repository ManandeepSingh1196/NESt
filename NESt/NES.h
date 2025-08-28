#pragma once

#include "Bus.h"
#include "nes6502.h"
#include "nes2C02.h"
#include "Cartridge.h"
#include "Mapper.h"
#include "Mapper_000.h"

#include <cstdint>
#include <memory>

#define print(x) std::cout << x << '\n';