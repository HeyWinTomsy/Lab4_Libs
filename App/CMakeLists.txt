add_executable(MyApplicaction
        main.cpp
)

target_link_libraries(MyApplicaction
        PRIVATE MathUtils
)

add_custom_command(TARGET MyApplicaction POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        $<TARGET_FILE:MathUtils>
        $<TARGET_FILE_DIR:MyApplicaction>
)
