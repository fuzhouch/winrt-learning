project(WL_1_HelloWorldNoDep)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

set(SOURCE_FILES
  main.cpp
  )

set(HEADER_FILES
  pch.h
  )


include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_executable(WL_HellWorld ${SOURCE_FILES} ${HEADER_FILES})

set_source_files_properties(pch.cpp PROPERTIES COMPILE_FLAGS "/Ycpch.h")
set_target_properties(${PROJECT} PROPERTIES COMPILE_FLAGS "/Yupch.h")
set_target_properties(${PROJECT} PROPERTIES VS_CPPWINRT true)
set_target_properties(${PROJECT} PROPERTIES VS_GLOBAL_ROOTNAMESPACE winrtlearn)
set_target_properties(${PROJECT} PROPERTIES CXX_STANDARD 17)

SET(CPPWINRT_REQUIRED_COMPILER_FLAGS "/std:c++latest /await")
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${CPPWINRT_REQUIRED_COMPILER_FLAGS}")

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${PROJECT})
