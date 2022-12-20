# CMakeList.txt: проект CMake для Liba; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
add_library (Liba Vector.cpp Vector.h)
add_library(prah prah.cpp prah.h)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Liba PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
