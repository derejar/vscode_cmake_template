set(LIBRARY_NAME square)

add_library(${LIBRARY_NAME} STATIC)

target_sources(${LIBRARY_NAME}
    PRIVATE
        Square.cpp
    PUBLIC FILE_SET library_headers TYPE HEADERS FILES
        Square.h

)

