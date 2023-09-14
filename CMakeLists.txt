cmake_minimum_required(VERSION 3.26)

project(clucene_learn)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 添加 clucene-code 作为子项目
add_subdirectory(contrib/clucene)

# 设置 include 目录
include_directories(
        contrib/clucene/src/shared
        ${CMAKE_BINARY_DIR}/contrib/clucene/src/shared
        contrib/sse2neon
        contrib/clucene/src/core
        contrib/clucene/src/contribs-lib
)

# 添加目标可执行文件
add_executable(clucene_learn src/main.cpp)

# 链接 clucene 库
# 这里我使用了 Doris 的CMake部分中所列的库名，但你可能需要根据实际的库名进行更改
target_link_libraries(clucene_learn clucene-core-static clucene-shared-static ic roaring)
