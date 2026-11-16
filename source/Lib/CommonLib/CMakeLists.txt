add_library(CommonLib STATIC
  CommonDef.cpp
)

# "PUBLIC" means: anyone linking CommonLib can #include "CommonLib/..."
target_include_directories(CommonLib PUBLIC ${PROJECT_SOURCE_DIR}/source/Lib)
target_compile_definitions(CommonLib PRIVATE MINICODEC_VERSION="${PROJECT_VERSION}")
target_link_libraries(CommonLib PRIVATE minicodec_warnings)
