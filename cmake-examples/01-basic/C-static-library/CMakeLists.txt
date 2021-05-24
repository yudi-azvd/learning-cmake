cmake_minimum_required(VERSION 3.5)

project(hello_library)


### Create library

# Gerar biblioteca estática a partir dos arquivos fonte
add_library(
  hello_library
  STATIC
  src/Hello.cpp
)

target_include_directories(
  hello_library
  PUBLIC
  ${PROJECT_SOURCE_DIR}/include
)


### Create executable
# Criar um executável a partir dos arquivos fonte a cima
add_executable(
  hello_binary
  src/main.cpp
)

target_link_libraries(
  hello_binary
  PRIVATE
  hello_library
)