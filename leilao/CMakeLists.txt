cmake_minimum_required(VERSION 3.20)
project(leilao)

set(CMAKE_CXX_STANDARD 17)

add_executable(leilao src/main.cpp src/Lance.cpp src/Lance.h src/Usuario.cpp src/Usuario.h src/Leilao.cpp src/Leilao.h src/Avaliador.cpp src/Avaliador.h tests/AvaliadorTeste.cpp)
