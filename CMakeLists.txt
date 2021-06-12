cmake_minimum_required(VERSION 3.19)
project(Ex4_PA)

set(CMAKE_CXX_STANDARD 14)

add_executable(Ex4_PA main.cpp Board.cpp Board.hpp City.cpp City.hpp Color.cpp Color.hpp Dispatcher.cpp Dispatcher.hpp FieldDoctor.cpp FieldDoctor.hpp GeneSplicer.cpp GeneSplicer.hpp Medic.cpp Medic.hpp OperationsExpert.cpp OperationsExpert.hpp Player.cpp Player.hpp Researcher.cpp Researcher.hpp Scientist.cpp Scientist.hpp Test.cpp Virologist.cpp Virologist.hpp)