# CMake generated Testfile for 
# Source directory: /home/maxim/Programming/Cpp/OpenGL/cmake-3.29.1/Utilities/cmcurl
# Build directory: /home/maxim/Programming/Cpp/OpenGL/cmake-3.29.1/Utilities/cmcurl
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[curl]=] "curltest" "http://open.cdash.org/user.php")
set_tests_properties([=[curl]=] PROPERTIES  _BACKTRACE_TRIPLES "/home/maxim/Programming/Cpp/OpenGL/cmake-3.29.1/Utilities/cmcurl/CMakeLists.txt;1657;add_test;/home/maxim/Programming/Cpp/OpenGL/cmake-3.29.1/Utilities/cmcurl/CMakeLists.txt;0;")
subdirs("lib")
