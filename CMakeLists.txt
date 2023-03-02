cmake_minimum_required(VERSION 2.9)

project(app)

set(APP_VERSION_MAJOR 1)
set(APP_VERSION_MINOR 0)
option(MEDIAN_OF_TWO_SORTED_ARRAYS
    "enable MEDIAN_OF_TWO_SORTED_ARRAYS" OFF)

configure_file(
    "${PROJECT_SOURCE_DIR}/config.h.in"
    "${PROJECT_SOURCE_DIR}/config.h"
)

if (MEDIAN_OF_TWO_SORTED_ARRAYS)
    include_directories("sub/MEDIAN_OF_TWO_SORTED_ARRAYS")
    add_subdirectory("sub/MEDIAN_OF_TWO_SORTED_ARRAYS")
    set(EXTRA_LIBS ${EXTRA_LIBS} MEDIAN_OF_TWO_SORTED_ARRAYS)
endif()

aux_source_directory(. SRC_DIR)

add_executable(app ${SRC_DIR})

target_link_libraries(app ${EXTRA_LIBS})
