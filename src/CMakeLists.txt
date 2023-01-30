add_executable(test_gperftools test_gperftools.cxx)

target_link_libraries(test_gperftools -Wl,--no-as-needed profiler)

install(TARGETS test_gperftools DESTINATION bin)