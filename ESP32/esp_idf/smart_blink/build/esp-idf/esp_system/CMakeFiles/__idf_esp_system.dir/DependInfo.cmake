
# Consider dependencies only in project.
set(CMAKE_DEPENDS_IN_PROJECT_ONLY OFF)

# The set of languages for which implicit dependencies are needed:
set(CMAKE_DEPENDS_LANGUAGES
  "ASM"
  )
# The set of files for implicit dependencies of each language:
set(CMAKE_DEPENDS_CHECK_ASM
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/port/arch/xtensa/debug_helpers_asm.S" "/home/aruncs/Coding/ESP32/smart_blink/build/esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/port/arch/xtensa/debug_helpers_asm.S.obj"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/port/arch/xtensa/esp_ipc_isr_handler.S" "/home/aruncs/Coding/ESP32/smart_blink/build/esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/port/arch/xtensa/esp_ipc_isr_handler.S.obj"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/port/arch/xtensa/esp_ipc_isr_routines.S" "/home/aruncs/Coding/ESP32/smart_blink/build/esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/port/arch/xtensa/esp_ipc_isr_routines.S.obj"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/port/arch/xtensa/expression_with_stack_asm.S" "/home/aruncs/Coding/ESP32/smart_blink/build/esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/port/arch/xtensa/expression_with_stack_asm.S.obj"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/port/arch/xtensa/panic_handler_asm.S" "/home/aruncs/Coding/ESP32/smart_blink/build/esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/port/arch/xtensa/panic_handler_asm.S.obj"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/port/soc/esp32/highint_hdl.S" "/home/aruncs/Coding/ESP32/smart_blink/build/esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/port/soc/esp32/highint_hdl.S.obj"
  )
set(CMAKE_ASM_COMPILER_ID "GNU")

# Preprocessor definitions for this target.
set(CMAKE_TARGET_DEFINITIONS_ASM
  "ESP_PLATFORM"
  "IDF_VER=\"v5.4-dev-3201-g46acfdce96-dirty\""
  "SOC_MMU_PAGE_SIZE=CONFIG_MMU_PAGE_SIZE"
  "SOC_XTAL_FREQ_MHZ=CONFIG_XTAL_FREQ"
  "_GLIBCXX_HAVE_POSIX_SEMAPHORE"
  "_GLIBCXX_USE_POSIX_SEMAPHORE"
  "_GNU_SOURCE"
  "_POSIX_READER_WRITER_LOCKS"
  )

# The include file search paths:
set(CMAKE_ASM_TARGET_INCLUDE_PATH
  "config"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/include"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/port/include"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/port/."
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/port/soc"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/port/include/private"
  "/home/aruncs/Git/ESP32/esp-idf/components/newlib/platform_include"
  "/home/aruncs/Git/ESP32/esp-idf/components/freertos/config/include"
  "/home/aruncs/Git/ESP32/esp-idf/components/freertos/config/include/freertos"
  "/home/aruncs/Git/ESP32/esp-idf/components/freertos/config/xtensa/include"
  "/home/aruncs/Git/ESP32/esp-idf/components/freertos/FreeRTOS-Kernel/include"
  "/home/aruncs/Git/ESP32/esp-idf/components/freertos/FreeRTOS-Kernel/portable/xtensa/include"
  "/home/aruncs/Git/ESP32/esp-idf/components/freertos/FreeRTOS-Kernel/portable/xtensa/include/freertos"
  "/home/aruncs/Git/ESP32/esp-idf/components/freertos/esp_additions/include"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_hw_support/include"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_hw_support/include/soc"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_hw_support/include/soc/esp32"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_hw_support/dma/include"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_hw_support/ldo/include"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_hw_support/debug_probe/include"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_hw_support/port/esp32/."
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_hw_support/port/esp32/include"
  "/home/aruncs/Git/ESP32/esp-idf/components/heap/include"
  "/home/aruncs/Git/ESP32/esp-idf/components/heap/tlsf"
  "/home/aruncs/Git/ESP32/esp-idf/components/log/include"
  "/home/aruncs/Git/ESP32/esp-idf/components/soc/include"
  "/home/aruncs/Git/ESP32/esp-idf/components/soc/esp32"
  "/home/aruncs/Git/ESP32/esp-idf/components/soc/esp32/include"
  "/home/aruncs/Git/ESP32/esp-idf/components/soc/esp32/register"
  "/home/aruncs/Git/ESP32/esp-idf/components/hal/platform_port/include"
  "/home/aruncs/Git/ESP32/esp-idf/components/hal/esp32/include"
  "/home/aruncs/Git/ESP32/esp-idf/components/hal/include"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_rom/include"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_rom/esp32/include"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_rom/esp32/include/esp32"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_rom/esp32"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_common/include"
  "/home/aruncs/Git/ESP32/esp-idf/components/xtensa/esp32/include"
  "/home/aruncs/Git/ESP32/esp-idf/components/xtensa/include"
  "/home/aruncs/Git/ESP32/esp-idf/components/xtensa/deprecated_include"
  "/home/aruncs/Git/ESP32/esp-idf/components/lwip/include"
  "/home/aruncs/Git/ESP32/esp-idf/components/lwip/include/apps"
  "/home/aruncs/Git/ESP32/esp-idf/components/lwip/include/apps/sntp"
  "/home/aruncs/Git/ESP32/esp-idf/components/lwip/lwip/src/include"
  "/home/aruncs/Git/ESP32/esp-idf/components/lwip/port/include"
  "/home/aruncs/Git/ESP32/esp-idf/components/lwip/port/freertos/include"
  "/home/aruncs/Git/ESP32/esp-idf/components/lwip/port/esp32xx/include"
  "/home/aruncs/Git/ESP32/esp-idf/components/lwip/port/esp32xx/include/arch"
  "/home/aruncs/Git/ESP32/esp-idf/components/lwip/port/esp32xx/include/sys"
  "/home/aruncs/Git/ESP32/esp-idf/components/spi_flash/include"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_timer/include"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_mm/include"
  "/home/aruncs/Git/ESP32/esp-idf/components/bootloader_support/include"
  "/home/aruncs/Git/ESP32/esp-idf/components/bootloader_support/bootloader_flash/include"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_pm/include"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_gdbstub/include"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_app_format/include"
  "/home/aruncs/Git/ESP32/esp-idf/components/vfs/include"
  )

# The set of dependency files which are needed:
set(CMAKE_DEPENDS_DEPENDENCY_FILES
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/crosscore_int.c" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/crosscore_int.c.obj" "gcc" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/crosscore_int.c.obj.d"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/esp_err.c" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/esp_err.c.obj" "gcc" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/esp_err.c.obj.d"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/esp_ipc.c" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/esp_ipc.c.obj" "gcc" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/esp_ipc.c.obj.d"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/esp_system.c" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/esp_system.c.obj" "gcc" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/esp_system.c.obj.d"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/freertos_hooks.c" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/freertos_hooks.c.obj" "gcc" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/freertos_hooks.c.obj.d"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/int_wdt.c" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/int_wdt.c.obj" "gcc" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/int_wdt.c.obj.d"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/panic.c" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/panic.c.obj" "gcc" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/panic.c.obj.d"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/port/arch/xtensa/debug_helpers.c" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/port/arch/xtensa/debug_helpers.c.obj" "gcc" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/port/arch/xtensa/debug_helpers.c.obj.d"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/port/arch/xtensa/debug_stubs.c" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/port/arch/xtensa/debug_stubs.c.obj" "gcc" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/port/arch/xtensa/debug_stubs.c.obj.d"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/port/arch/xtensa/esp_ipc_isr_port.c" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/port/arch/xtensa/esp_ipc_isr_port.c.obj" "gcc" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/port/arch/xtensa/esp_ipc_isr_port.c.obj.d"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/port/arch/xtensa/expression_with_stack.c" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/port/arch/xtensa/expression_with_stack.c.obj" "gcc" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/port/arch/xtensa/expression_with_stack.c.obj.d"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/port/arch/xtensa/panic_arch.c" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/port/arch/xtensa/panic_arch.c.obj" "gcc" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/port/arch/xtensa/panic_arch.c.obj.d"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/port/arch/xtensa/trax.c" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/port/arch/xtensa/trax.c.obj" "gcc" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/port/arch/xtensa/trax.c.obj.d"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/port/brownout.c" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/port/brownout.c.obj" "gcc" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/port/brownout.c.obj.d"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/port/cpu_start.c" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/port/cpu_start.c.obj" "gcc" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/port/cpu_start.c.obj.d"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/port/esp_ipc_isr.c" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/port/esp_ipc_isr.c.obj" "gcc" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/port/esp_ipc_isr.c.obj.d"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/port/esp_system_chip.c" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/port/esp_system_chip.c.obj" "gcc" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/port/esp_system_chip.c.obj.d"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/port/image_process.c" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/port/image_process.c.obj" "gcc" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/port/image_process.c.obj.d"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/port/panic_handler.c" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/port/panic_handler.c.obj" "gcc" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/port/panic_handler.c.obj.d"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/port/soc/esp32/cache_err_int.c" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/port/soc/esp32/cache_err_int.c.obj" "gcc" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/port/soc/esp32/cache_err_int.c.obj.d"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/port/soc/esp32/clk.c" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/port/soc/esp32/clk.c.obj" "gcc" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/port/soc/esp32/clk.c.obj.d"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/port/soc/esp32/reset_reason.c" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/port/soc/esp32/reset_reason.c.obj" "gcc" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/port/soc/esp32/reset_reason.c.obj.d"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/port/soc/esp32/system_internal.c" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/port/soc/esp32/system_internal.c.obj" "gcc" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/port/soc/esp32/system_internal.c.obj.d"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/stack_check.c" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/stack_check.c.obj" "gcc" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/stack_check.c.obj.d"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/startup.c" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/startup.c.obj" "gcc" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/startup.c.obj.d"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/startup_funcs.c" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/startup_funcs.c.obj" "gcc" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/startup_funcs.c.obj.d"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/system_time.c" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/system_time.c.obj" "gcc" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/system_time.c.obj.d"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/task_wdt/task_wdt.c" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/task_wdt/task_wdt.c.obj" "gcc" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/task_wdt/task_wdt.c.obj.d"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/task_wdt/task_wdt_impl_timergroup.c" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/task_wdt/task_wdt_impl_timergroup.c.obj" "gcc" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/task_wdt/task_wdt_impl_timergroup.c.obj.d"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/ubsan.c" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/ubsan.c.obj" "gcc" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/ubsan.c.obj.d"
  "/home/aruncs/Git/ESP32/esp-idf/components/esp_system/xt_wdt.c" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/xt_wdt.c.obj" "gcc" "esp-idf/esp_system/CMakeFiles/__idf_esp_system.dir/xt_wdt.c.obj.d"
  )

# Targets to which this target links which contain Fortran sources.
set(CMAKE_Fortran_TARGET_LINKED_INFO_FILES
  )

# Targets to which this target links which contain Fortran sources.
set(CMAKE_Fortran_TARGET_FORWARD_LINKED_INFO_FILES
  )

# Fortran module output directory.
set(CMAKE_Fortran_TARGET_MODULE_DIR "")
