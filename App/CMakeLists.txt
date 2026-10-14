add_executable(MyApplication
        main.cpp
)

target_link_libraries(MyApplication
        PRIVATE MathUtils
)

add_custom_command(TARGET MyApplication POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        $<TARGET_FILE:MathUtils>
        $<TARGET_FILE_DIR:MyApplication>
)
