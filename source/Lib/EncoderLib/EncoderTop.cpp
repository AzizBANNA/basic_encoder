#include "EncoderLib/EncoderTop.h"

#include "CommonLib/CommonDef.h"

#include <cstdio>

namespace mc
{

void EncoderTop::printInfo() const
{
  std::printf("MiniCodec Encoder, version %s\n", getVersionString());
}

}  // namespace mc
