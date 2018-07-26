#
# This file is part of the C2FStruct distribution Copyright (c) 2018 Jimmy
# Aguilar Mena.
#
# This program is free software: you can redistribute it and/or modify it under
# the terms of the GNU General Public License as published by the Free Software
# Foundation, version 3.
#
# This program is distributed in the hope that it will be useful, but WITHOUT
# ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
# FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License along with
# this program. If not, see <http://www.gnu.org/licenses/>.
#

cmake_minimum_required(VERSION 3.0)

project(StructC2F
  LANGUAGES CXX Fortran)

add_library(library library.cpp)

add_executable(mainC main.cpp)
target_link_libraries(mainC library)

add_executable(mainF main.f90)
target_link_libraries(mainF library)

enable_testing()

add_test(test_C++ mainC)
add_test(test_Fort mainF)
