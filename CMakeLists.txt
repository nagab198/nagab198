cmake_minimum_required(VERSION 3.20)
project(c_projects C)

set(CMAKE_C_STANDARD 99)

add_executable(c_projects coffeeshop.c )

add_executable(unformatted_output_functions unformated_output_functions.c)

add_executable(functions functions.c)

add_executable(functions1 functioncall_example.c)

add_executable(input_and_output i_o.c)

add_executable(unformatted_input_functions unformated_input_functions.c)

add_executable(loop nested_loop.c)

add_executable(array read_array.c)

add_executable(marks markslist.c)

add_executable(countvalues count_evenodd.c)

add_executable(sumarray sumarray.c)

add_executable(twodarray two_D_array.c)

add_executable(simpleinst simple.c)

add_executable(summatrix sumtwomateix.c)

add_executable(stringcpy stringcompaire.c)