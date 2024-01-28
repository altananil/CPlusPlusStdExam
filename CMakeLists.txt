cmake_minimum_required(VERSION 3.10)

project(CPlusPlusStdExam)

# C++ standard tanımla (örneğin C++17)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Kaynak dosyalarını ekleyin
set(SOURCES
    src/main.cpp
    src/STL/AnyExam.cpp
    src/STL/BitsetExam.cpp
    src/STL/ChronoExam.cpp
    src/STL/CompareExam.cpp
    src/STL/CsetjmpExam.cpp
    src/STL/CsignalExam.cpp





)

# İlgili hedef oluştur
add_executable(${PROJECT_NAME} ${SOURCES})
