cmake_minimum_required(VERSION 3.26)

project(MyCLuceneProject)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 添加 clucene-code 作为子项目
add_subdirectory(contrib/clucene-code)

# 添加目标可执行文件
add_executable(clucene_learn src/main.cpp)

# 链接 CLucene 库到目标可执行文件
# 这里仍然假设 clucene-code 的 CMakeLists.txt 为输出库设置了 "clucene-core" 作为目标名
target_link_libraries(clucene_learn clucene-core)
