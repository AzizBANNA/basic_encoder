add_executable(decoder
  decmain.cpp
)

target_link_libraries(decoder PRIVATE DecoderLib minicodec_warnings)
