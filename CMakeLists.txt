# CMake build for Windows, Linux, and macOS
# Updated by Liang-Jun Zhu
# zlj@lreis.ac.cn
cmake_minimum_required(VERSION 2.8)
project(MongoUtil)
IF(COMMAND CMAKE_POLICY)
    CMAKE_POLICY(SET CMP0015 NEW)
ENDIF(COMMAND CMAKE_POLICY)
SET (CMAKE_INSTALL_PREFIX ${CMAKE_SOURCE_DIR})
################# OS platform   ##################
if (WIN32)
    add_definitions(-Dwindows)
    if(MSVC)
        add_definitions(-DMSVC)
    endif()
elseif(APPLE)
    add_definitions(-Dmacos)
else()
    add_definitions(-Dlinux)
endif()
################# Find packages ##################
# Bson and MongoC are required
include(FindBson.cmake)
include(FindMongoC.cmake)
include_directories(${BSON_INCLUDE_DIR} ${MONGOC_INCLUDE_DIR})
################# Packages found ##################
set(UTILS_INC ../UtilsClass)
set(UTILS_FILES ../UtilsClass/utils.cpp ../UtilsClass/util.cpp ../UtilsClass/StringList.cpp ../UtilsClass/ModelException.cpp)
set(SOURCE_FILES main.cpp MongoUtil.cpp)
include_directories(${UTILS_INC})
add_executable(MongoUtil ${SOURCE_FILES} ${UTILS_FILES})
target_link_libraries(MongoUtil ${BSON_LIBRARIES} ${MONGOC_LIBRARIES})
install(TARGETS ${MongoUtil} DESTINATION bin)