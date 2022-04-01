add_library(rxBread)
target_include_directories(
    rxBread
    PUBLIC "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../include>"
    PUBLIC "$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>"
    PRIVATE "${CMAKE_BINARY_DIR}/configured_files/include")

target_sources(rxBread PRIVATE lib.cpp)
target_link_libraries(rxBread PRIVATE project_options project_warnings)
