add_library(MathUtils STATIC src/MathUtils.cpp)

target_include_directories(MathUtils PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_compile_features(MathUtils PUBLIC cxx_std_20)