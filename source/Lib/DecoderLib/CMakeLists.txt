add_library(DecoderLib STATIC
  DecoderTop.cpp
)

target_include_directories(DecoderLib PUBLIC ${PROJECT_SOURCE_DIR}/source/Lib)
target_link_libraries(DecoderLib
  PUBLIC  CommonLib
  PRIVATE minicodec_warnings)
