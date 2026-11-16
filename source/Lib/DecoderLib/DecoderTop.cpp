#include "DecoderLib/DecoderTop.h"

#include "CommonLib/CommonDef.h"

#include <cstdio>

namespace mc
{

void DecoderTop::printInfo() const
{
  std::printf("MiniCodec Decoder, version %s\n", getVersionString());
}

}  // namespace mc
