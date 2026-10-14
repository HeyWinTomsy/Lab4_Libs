add_library(MathUtils SHARED
        src/MathUtils.cpp
)

target_include_directories(MathUtils PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_compile_features(MathUtils PUBLIC cxx_std_20)

target_compile_definitions(MathUtils PRIVATE MATHUTILS_EXPORTS)