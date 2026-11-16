add_executable(encoder
  encmain.cpp
)

target_link_libraries(encoder PRIVATE EncoderLib minicodec_warnings)
