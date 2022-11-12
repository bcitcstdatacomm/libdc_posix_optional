set(TEST_HEADER_LIST
        tests.h
        )

set(TEST_SOURCE_LIST
        main.c
        )

include_directories(${CGREEN_PUBLIC_INCLUDE_DIRS} ${PROJECT_BINARY_DIR})
add_executable(libdc_posix_optional_test ${TEST_SOURCE_LIST} ${TEST_HEADER_LIST} ${SOURCE_LIST} ${HEADER_LIST})

target_compile_features(libdc_posix_optional_test PRIVATE c_std_17)

target_include_directories(libdc_posix_optional_test PRIVATE ../include/dc_posix_optional)
target_include_directories(libdc_posix_optional_test PRIVATE /usr/include)
target_include_directories(libdc_posix_optional_test PRIVATE /usr/local/include)

find_library(LIBCGREEN cgreen REQUIRED)
find_library(LIBDC_ERROR dc_error REQUIRED)
find_library(LIBDC_ENV dc_env REQUIRED)
find_library(LIBRT rt)
find_library(LIBPTHREAD pthread)

target_link_libraries(libdc_posix_optional_test PRIVATE ${LIBCGREEN})
target_link_libraries(libdc_posix_optional_test PRIVATE ${LIBDC_ERROR})
target_link_libraries(libdc_posix_optional_test PRIVATE ${LIBDC_ENV})

if(LIBRT)
    target_link_libraries(libdc_posix_optional_test PUBLIC ${LIBRT})
endif()

if(LIBPTHREAD)
    target_link_libraries(libdc_posix_optional_test PUBLIC ${LIBPTHREAD})
endif()

add_test(NAME libdc_posix_optional_test COMMAND libdc_posix_optional_test)
