cmake_minimum_required(VERSION 3.14)

add_executable(windowProject
        main.c
        myApps.c
        )
        
target_link_libraries(windowProject pico_stdlib window) 

# create map/bin/hex file etc.
pico_add_extra_outputs(windowProject)


