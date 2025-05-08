# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\trainticketsystem_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\trainticketsystem_autogen.dir\\ParseCache.txt"
  "trainticketsystem_autogen"
  )
endif()
