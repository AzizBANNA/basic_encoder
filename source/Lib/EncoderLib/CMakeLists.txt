add_library(EncoderLib STATIC
  EncoderTop.cpp
)

target_include_directories(EncoderLib PUBLIC ${PROJECT_SOURCE_DIR}/source/Lib)
target_link_libraries(EncoderLib
  PUBLIC  CommonLib
  PRIVATE minicodec_warnings)
