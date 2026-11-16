include(FetchContent)

# Download GoogleTest once at configure time (stored in build/_deps)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.17.0.tar.gz
  DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)
set(INSTALL_GTEST OFF CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(unit_tests
  test_sanity.cpp
)

target_link_libraries(unit_tests PRIVATE
  CommonLib
  EncoderLib
  DecoderLib
  GTest::gtest_main
  minicodec_warnings)

# Registers every TEST() so "ctest" can run them
include(GoogleTest)
gtest_discover_tests(unit_tests)
