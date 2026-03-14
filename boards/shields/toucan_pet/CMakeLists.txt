
if(CONFIG_ZMK_DISPLAY AND CONFIG_NICE_VIEW_WIDGET_STATUS)
  zephyr_library_include_directories(${CMAKE_SOURCE_DIR}/include)
  zephyr_library_sources(custom_status_screen.c)
  zephyr_library_sources(widgets/toucan128.c)
  zephyr_library_sources(widgets/screen.c)
  zephyr_library_sources(widgets/sleep.c)
endif()
