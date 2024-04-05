cmake_minimum_required(VERSION 3.5)

project(Trie LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Trie main.cpp trienode.h trienode.cpp trie.h trie.cpp)
