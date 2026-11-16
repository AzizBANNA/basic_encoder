#pragma once

#include <cstdint>

namespace mc
{

// One sample value. 16 bit so it can also hold residuals (negative values)
// and 10-bit video later on.
using Pel = int16_t;

const char* getVersionString();

}  // namespace mc
