cmake_minimum_required(VERSION 3.20)

project(MiniCodec
  VERSION 0.1.0
  DESCRIPTION "Minimal All-Intra video encoder/decoder"
  LANGUAGES CXX)

# ---------------------------------------------------------------------------
# Global settings
# ---------------------------------------------------------------------------
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Writes build/compile_commands.json so editors (clangd) understand the code
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Default to Release when no build type is given
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
  set(CMAKE_BUILD_TYPE Release CACHE STRING "Build type" FORCE)
endif()

# Put executables in build/bin
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

option(MINICODEC_BUILD_TESTS "Build unit tests" ON)

# Compiler warnings, shared by all our targets
add_library(minicodec_warnings INTERFACE)
target_compile_options(minicodec_warnings INTERFACE -Wall -Wextra -Wpedantic)

# ---------------------------------------------------------------------------
# Libraries and applications
# ---------------------------------------------------------------------------
add_subdirectory(source/Lib/CommonLib)
add_subdirectory(source/Lib/EncoderLib)
add_subdirectory(source/Lib/DecoderLib)
# Utilities (YUV I/O, config parsing) is added in Steps 3-4

add_subdirectory(source/App/EncoderApp)
add_subdirectory(source/App/DecoderApp)

# ---------------------------------------------------------------------------
# Tests
# ---------------------------------------------------------------------------
if(MINICODEC_BUILD_TESTS)
  enable_testing()
  add_subdirectory(tests)
endif()
