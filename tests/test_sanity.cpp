#include "CommonLib/CommonDef.h"

#include <gtest/gtest.h>

#include <string>

TEST(Sanity, VersionStringIsSet)
{
  EXPECT_EQ(std::string(mc::getVersionString()), "0.1.0");
}

TEST(Sanity, PelHoldsNegativeResiduals)
{
  // Residuals range from -255 to 255 for 8-bit video
  mc::Pel residual = -255;
  EXPECT_LT(residual, 0);
  EXPECT_EQ(sizeof(mc::Pel), 2u);
}
