/* Keep this file language agnostic. Only preprocessor here. */

#ifndef __FIRMWARE_SYMBOLS_H_S__
#define __FIRMWARE_SYMBOLS_H_S__

#if defined(CEX_KERNEL)

#define TOC						0x346390

#define create_kernel_object_symbol			0x11F9C
#define destroy_kernel_object_symbol			0x11900
#define destroy_shared_kernel_object_symbol		0x11274
#define open_kernel_object_symbol			0x125EC
#define open_shared_kernel_object_symbol		0x123FC
#define close_kernel_object_handle_symbol		0x11A1C

#define alloc_symbol					0x63ED8
#define dealloc_symbol					0x64314
#define copy_to_user_symbol				0xF85C
#define copy_from_user_symbol				0xFA78
#define copy_to_process_symbol				0xF914
#define copy_from_process_symbol			0xF724
#define page_allocate_symbol				0x5FA48
#define page_free_symbol				0x5F4AC
#define page_export_to_proc_symbol			0x5FBE4
#define page_unexport_from_proc_symbol			0x5F3A0
#define kernel_ea_to_lpar_addr_symbol			0x6F7F0
#define process_ea_to_lpar_addr_ex_symbol		0x76E04
#define set_pte_symbol					0x5DA44
#define map_process_memory_symbol			0x76910
#define panic_symbol					0x29C680

#define memcpy_symbol					0x7DFD0
#define memset_symbol					0x4E508
#define memcmp_symbol					0x4D818
#define memchr_symbol					0x4D7C8
#define printf_symbol					0x29E77C
#define printfnull_symbol				0x2A31EC
#define sprintf_symbol					0x4F930
#define snprintf_symbol					0x4F89C
#define strcpy_symbol					0x4E6B4
#define strncpy_symbol					0x4E77C
#define strlen_symbol					0x4E6DC
#define strcat_symbol					0x4E5E4
#define strcmp_symbol					0x4E660
#define strncmp_symbol					0x4E708
#define strchr_symbol					0x4E61C
#define strrchr_symbol					0x4E7EC

#define spin_lock_irqsave_ex_symbol			0x29C850
#define spin_unlock_irqrestore_ex_symbol		0x29C824

#define create_process_common_symbol			0x29A64C
#define create_process_base_symbol			0x299D08
#define load_process_symbol				0x5004
#define process_kill_symbol				0x29A458

#define ppu_thread_create_symbol			0x13EB4
#define ppu_thread_exit_symbol				0x13F6C
#define ppu_thread_join_symbol				0x13FC0
#define ppu_thread_delay_symbol				0x28554
#define create_kernel_thread_symbol			0x248D8
#define create_user_thread_symbol			0x25014
#define create_user_thread2_symbol			0x24E38
#define start_thread_symbol				0x23B04
#define run_thread_symbol				0x23334
#define register_thread_symbol				0x296A64
#define allocate_user_stack_symbol			0x29724C
#define deallocate_user_stack_symbol			0x2971B4

#define mutex_create_symbol				0x13628
#define mutex_destroy_symbol				0x135C0
#define mutex_lock_symbol				0x135B8
#define mutex_lock_ex_symbol				0x1D914
#define mutex_trylock_symbol				0x135B4
#define mutex_unlock_symbol				0x135B0

#define cond_create_symbol				0x13794
#define cond_destroy_symbol				0x13744
#define cond_wait_symbol				0x1373C
#define cond_wait_ex_symbol				0x1EF00
#define cond_signal_symbol				0x13718
#define cond_signal_all_symbol				0x136F4

#define semaphore_initialize_symbol			0x309C4
#define semaphore_wait_ex_symbol			0x306CC
#define semaphore_trywait_symbol			0x302B4
#define semaphore_post_ex_symbol			0x30400

#define event_port_create_symbol			0x13064
#define event_port_destroy_symbol			0x134CC
#define event_port_connect_symbol			0x13544
#define event_port_disconnect_symbol			0x13470
#define event_port_send_symbol				0x1305C
#define event_port_send_ex_symbol			0x2AFB4

#define event_queue_create_symbol			0x1336C
#define event_queue_destroy_symbol			0x132F4
#define event_queue_receive_symbol			0x13138
#define event_queue_tryreceive_symbol			0x13204

#define cellFsOpen_symbol				0x2C2820
#define cellFsClose_symbol				0x2C2688
#define cellFsRead_symbol				0x2C27C4
#define cellFsWrite_symbol				0x2C2730
#define cellFsLseek_symbol				0x2C1DB8
#define cellFsStat_symbol				0x2C203C
#define cellFsUtime_symbol				0x2C3A58
#define cellFsUnlink_internal_symbol			0x1A96E8

#define cellFsUtilMount_symbol				0x2C1B98
#define cellFsUtilUmount_symbol				0x2C1B6C
#define cellFsUtilNewfs_symbol				0x2C34F0

#define pathdup_from_user_symbol			0x1B1988
#define open_path_symbol				0x2C2558
#define open_fs_object_symbol				0x190970
#define close_fs_object_symbol				0x18F940

#define storage_get_device_info_symbol			0x2A7BBC
#define storage_get_device_config_symbol		0x2A788C
#define storage_open_symbol				0x2A70E0
#define storage_close_symbol				0x2A767C
#define storage_read_symbol				0x2A65F8
#define storage_write_symbol				0x2A64C8
#define storage_send_device_command_symbol		0x2A6734
#define storage_map_io_memory_symbol			0x2A7A78
#define storage_unmap_io_memory_symbol			0x2A7944
#define new_medium_listener_object_symbol		0x96A2C
#define delete_medium_listener_object_symbol		0x98264
#define set_medium_event_callbacks_symbol		0x985C8

#define cellUsbdRegisterLdd_symbol			0x28F2CC
#define cellUsbdUnregisterLdd_symbol			0x28F27C
#define cellUsbdScanStaticDescriptor_symbol		0x2904CC
#define cellUsbdOpenPipe_symbol				0x29057C
#define cellUsbdClosePipe_symbol			0x29052C
#define cellUsbdControlTransfer_symbol			0x290430
#define cellUsbdBulkTransfer_symbol			0x2903B0

#define decrypt_func_symbol				0x346D0
#define lv1_call_99_wrapper_symbol			0x4FD44
#define modules_verification_symbol			0x59788
#define authenticate_program_segment_symbol		0x5ABC4

#define prx_load_module_symbol				0x88168
#define prx_start_module_symbol				0x86E34
#define prx_stop_module_symbol				0x8820C
#define prx_unload_module_symbol			0x86B68
#define prx_get_module_info_symbol			0x865F0
#define prx_get_module_id_by_address_symbol		0x86500
#define prx_get_module_id_by_name_symbol		0x86550
#define prx_get_module_list_symbol			0x86670
#define load_module_by_fd_symbol			0x87798
#define parse_sprx_symbol				0x8551C
#define open_prx_object_symbol				0x7EB8C
#define close_prx_object_symbol				0x7F49C
#define lock_prx_mutex_symbol				0x864A8
#define unlock_prx_mutex_symbol				0x864B4

#define extend_kstack_symbol				0x6F748

#define get_pseudo_random_number_symbol			0x2579CC
#define md5_reset_symbol				0x163C40
#define md5_update_symbol				0x1646E0
#define md5_final_symbol				0x164860
#define ss_get_open_psid_symbol				0x259D94
#define update_mgr_read_eeprom_symbol			0x253BDC
#define update_mgr_write_eeprom_symbol			0x253B24

#define ss_params_get_update_status_symbol		0x5192C

#define syscall_table_symbol				0x35BCA8
#define syscall_call_offset				0x2A3CD0

#define read_bdvd0_symbol				0x1BBE5C
#define read_bdvd1_symbol				0x1BDA88
#define read_bdvd2_symbol				0x1CAC10

#define storage_internal_get_device_object_symbol	0x2A5F80

#define hid_mgr_read_usb_symbol				0x1046A8
#define hid_mgr_read_bt_symbol				0xFE580

#define bt_set_controller_info_internal_symbol		0xF25F8

/* Calls, jumps */
#define device_event_port_send_call			0x2AFF38

#define ss_pid_call_1					0x24342C

#define process_map_caller_call				0x4D24

#define read_module_header_call				0x7EA80
#define read_module_body_call				0x671C
#define load_module_by_fd_call1				0x88004

#define shutdown_copy_params_call			0xAABC

#define fsloop_open_call				0x2C29B8
#define fsloop_close_call				0x2C2A08
#define fsloop_read_call				0x2C2A48

/* Patches */
#define shutdown_patch_offset				0xAAA8
#define module_sdk_version_patch_offset			0x296294
#define module_add_parameter_to_parse_sprxpatch_offset	0x87874

#define user_thread_prio_patch				0x201B4
#define user_thread_prio_patch2				0x201C0

/* Rtoc entries */

#define io_rtoc_entry_1					-0x178
#define io_sub_rtoc_entry_1				-0x7EA0

#define decrypt_rtoc_entry_2 				-0x6680
#define decrypter_data_entry				-0x7F10

#define storage_rtoc_entry_1				0x1E50

#define device_event_rtoc_entry_1			0x20C0

#define time_rtoc_entry_1				-0x7640
#define time_rtoc_entry_2				-0x7648

#define thread_rtoc_entry_1				-0x76C0

#define process_rtoc_entry_1				-0x7800

#define bt_rtoc_entry_1					-0x3600

/* Permissions */
#define permissions_func_symbol				0x3560
#define permissions_exception1 				0x24EB8
#define permissions_exception2				0xC433C
#define permissions_exception3				0x20288

/* Legacy patches with no names yet */
/* Kernel offsets */
#define patch_data1_offset				0x3D9240
#define patch_func2 					0x5A140
#define patch_func2_offset 				0x2C //5A16C
#define patch_func8 					0x56EA0
#define patch_func8_offset1 				0xA4 //56F44
#define patch_func8_offset2 				0x208 //570A8
#define patch_func9 					0x5A5FC
#define patch_func9_offset 				0x470 //5AA6C
#define mem_base2					0x3D90

/* vars */
// TODO: #define open_psid_buf_symbol			0x45218C
#define thread_info_symbol				0x374230
#endif

#if defined(DEX_KERNEL)

#define TOC						0x363E80

#define create_kernel_object_symbol			0x125E4
#define destroy_kernel_object_symbol			0x11F48
#define destroy_shared_kernel_object_symbol		0x118BC
#define open_kernel_object_symbol			0x12C34
#define open_shared_kernel_object_symbol		0x12A44
#define close_kernel_object_handle_symbol		0x12064

#define alloc_symbol					0x677F0
#define dealloc_symbol					0x67C2C
#define copy_to_user_symbol				0xFEA4
#define copy_from_user_symbol				0x100C0
#define copy_to_process_symbol				0xFF5C
#define copy_from_process_symbol			0xFD6C
#define page_allocate_symbol				0x63360
#define page_free_symbol				0x62DC4
#define page_export_to_proc_symbol			0x634FC
#define page_unexport_from_proc_symbol			0x62CB8
#define kernel_ea_to_lpar_addr_symbol			0x73288
#define process_ea_to_lpar_addr_ex_symbol		0x7AE28
#define set_pte_symbol					0x6135C
#define map_process_memory_symbol			0x7A934
#define panic_symbol					0x2A44D8

#define memcpy_symbol					0x81FF4
#define memset_symbol					0x51DF8
#define memcmp_symbol					0x51108
#define memchr_symbol					0x510B8
#define printf_symbol					0x2A6828
#define printfnull_symbol				0x2AB2AC
#define sprintf_symbol					0x53220
#define snprintf_symbol					0x5318C
#define strcpy_symbol					0x51FA4
#define strncpy_symbol					0x5206C
#define strlen_symbol					0x51FCC
#define strcat_symbol					0x51ED4
#define strcmp_symbol					0x51F50
#define strncmp_symbol					0x51FF8
#define strchr_symbol					0x51F0C
#define strrchr_symbol					0x520DC

#define spin_lock_irqsave_ex_symbol			0x2A46A8
#define spin_unlock_irqrestore_ex_symbol		0x2A467C

#define create_process_common_symbol			0x2A14C0
#define create_process_base_symbol			0x2A0B58
#define load_process_symbol				0x5004
#define process_kill_symbol				0x2A12C0

#define ppu_thread_create_symbol			0x14530
#define ppu_thread_exit_symbol				0x145E8
#define ppu_thread_join_symbol				0x1463C
#define ppu_thread_delay_symbol				0x2A3E0
#define create_kernel_thread_symbol			0x264D0
#define create_user_thread_symbol			0x26C0C
#define create_user_thread2_symbol			0x26A30
#define start_thread_symbol				0x25568
#define run_thread_symbol				0x24D2C
#define register_thread_symbol				0x29D2C8
#define allocate_user_stack_symbol			0x29DAB0
#define deallocate_user_stack_symbol			0x29DA18

#define mutex_create_symbol				0x13C78
#define mutex_destroy_symbol				0x13C10
#define mutex_lock_symbol				0x13C08
#define mutex_lock_ex_symbol				0x1F30C
#define mutex_trylock_symbol				0x13C04
#define mutex_unlock_symbol				0x13C00

#define cond_create_symbol				0x13DE4
#define cond_destroy_symbol				0x13D94
#define cond_wait_symbol				0x13D8C
#define cond_wait_ex_symbol				0x208F8
#define cond_signal_symbol				0x13D68
#define cond_signal_all_symbol				0x13D44

#define semaphore_initialize_symbol			0x3422C
#define semaphore_wait_ex_symbol			0x33F34
#define semaphore_trywait_symbol			0x33B1C
#define semaphore_post_ex_symbol			0x33C68

#define event_port_create_symbol			0x136B4
#define event_port_destroy_symbol			0x13B1C
#define event_port_connect_symbol			0x13B94
#define event_port_disconnect_symbol			0x13AC0
#define event_port_send_symbol				0x136AC
#define event_port_send_ex_symbol			0x2CFC0

#define event_queue_create_symbol			0x139BC
#define event_queue_destroy_symbol			0x13944
#define event_queue_receive_symbol			0x13788
#define event_queue_tryreceive_symbol			0x13854

#define cellFsOpen_symbol				0x2D99E0
#define cellFsClose_symbol				0x2D9848
#define cellFsRead_symbol				0x2D9984
#define cellFsWrite_symbol				0x2D98F0
#define cellFsLseek_symbol				0x2D9144
#define cellFsStat_symbol				0x2D91FC
#define cellFsUtime_symbol				0x2DB2C0
#define cellFsUnlink_internal_symbol			0x1AF9BC

#define cellFsUtilMount_symbol				0x2D8EB8
#define cellFsUtilUmount_symbol				0x2D8E8C
#define cellFsUtilNewfs_symbol				0x2DA744

#define pathdup_from_user_symbol			0x1B7D78
#define open_path_symbol				0x2D9718
#define open_fs_object_symbol				0x196C44
#define close_fs_object_symbol				0x195C14

#define storage_get_device_info_symbol			0x2BA4DC
#define storage_get_device_config_symbol		0x2B9048
#define storage_open_symbol				0x2BA704
#define storage_close_symbol				0x2B8B68
#define storage_read_symbol				0x2B80E8
#define storage_write_symbol				0x2B7FB8
#define storage_send_device_command_symbol		0x2B7C08
#define storage_map_io_memory_symbol			0x2BA388
#define storage_unmap_io_memory_symbol			0x2BA244
#define new_medium_listener_object_symbol		0x9C0E4
#define delete_medium_listener_object_symbol		0x9D91C
#define set_medium_event_callbacks_symbol		0x9DC80

#define cellUsbdRegisterLdd_symbol			0x2956E8
#define cellUsbdUnregisterLdd_symbol			0x295698
#define cellUsbdScanStaticDescriptor_symbol		0x2968E8
#define cellUsbdOpenPipe_symbol				0x296998
#define cellUsbdClosePipe_symbol			0x296948
#define cellUsbdControlTransfer_symbol			0x29684C
#define cellUsbdBulkTransfer_symbol			0x2967CC

#define decrypt_func_symbol				0x37F38
#define lv1_call_99_wrapper_symbol			0x53634
#define modules_verification_symbol			0x5D0A0
#define authenticate_program_segment_symbol		0x5E4DC

#define prx_load_module_symbol				0x8C7B4
#define prx_start_module_symbol				0x8B480
#define prx_stop_module_symbol				0x8C858
#define prx_unload_module_symbol			0x8B1B4
#define prx_get_module_info_symbol			0x8ABAC
#define prx_get_module_id_by_address_symbol		0x8AABC
#define prx_get_module_id_by_name_symbol		0x8AB0C
#define prx_get_module_list_symbol			0x8AC2C
#define load_module_by_fd_symbol			0x8BDE4
#define parse_sprx_symbol				0x89AD8
#define open_prx_object_symbol				0x82BB0
#define close_prx_object_symbol				0x834C0
#define lock_prx_mutex_symbol				0x8AA64
#define unlock_prx_mutex_symbol				0x8AA70

#define extend_kstack_symbol				0x731E0

#define get_pseudo_random_number_symbol			0x25DDE8
#define md5_reset_symbol				0x169F14
#define md5_update_symbol				0x16A9B4
#define md5_final_symbol				0x16AB34
#define ss_get_open_psid_symbol				0x2601B0
#define update_mgr_read_eeprom_symbol			0x259FE0
#define update_mgr_write_eeprom_symbol			0x259F14

#define ss_params_get_update_status_symbol		0x5521C

#define syscall_table_symbol				0x37A1B0
#define syscall_call_offset				0x2ABD90

#define read_bdvd0_symbol				0x1C224C
#define read_bdvd1_symbol				0x1C3E78
#define read_bdvd2_symbol				0x1D1000

#define storage_internal_get_device_object_symbol	0x2B76C0

#define hid_mgr_read_usb_symbol				0x10A0F4
#define hid_mgr_read_bt_symbol				0x103FCC

#define bt_set_controller_info_internal_symbol		0xF8044

/* Calls, jumps */
#define device_event_port_send_call			0x2C44E8

#define ss_pid_call_1					0x24981C

#define process_map_caller_call				0x4D24

#define read_module_header_call				0x82AA4
#define read_module_body_call				0x671C
#define load_module_by_fd_call1				0x8C650

#define shutdown_copy_params_call			0xAB3C

#define fsloop_open_call				0x2D9B78
#define fsloop_close_call				0x2D9BC8
#define fsloop_read_call				0x2D9C08

/* Patches */
#define shutdown_patch_offset				0xAB28
#define module_sdk_version_patch_offset			0x29C8F0
#define module_add_parameter_to_parse_sprxpatch_offset	0x8BEC0

#define user_thread_prio_patch				0x21BAC
#define user_thread_prio_patch2				0x21BB8

/* Rtoc entries */

#define io_rtoc_entry_1					-0x48
#define io_sub_rtoc_entry_1				-0x7EA0

#define decrypt_rtoc_entry_2				-0x65A0
#define decrypter_data_entry				-0x7F10

#define storage_rtoc_entry_1				0x2328

#define device_event_rtoc_entry_1			0x26B0

#define time_rtoc_entry_1				-0x75E0
#define time_rtoc_entry_2				-0x75E8

#define thread_rtoc_entry_1				-0x7660

#define process_rtoc_entry_1				-0x77A0

#define bt_rtoc_entry_1					-0x34D8

/* Permissions */
#define permissions_func_symbol				0x3560
#define permissions_exception1				0x26AB0
#define permissions_exception2				0xC99F4
#define permissions_exception3				0x21C80

/* Legacy patches with no names yet */
/* Kernel offsets */
#define patch_data1_offset				0x3F7A40
#define patch_func2 					0x5DA58
#define patch_func2_offset 				0x2C //5DA84
#define patch_func8 					0x5A7B8
#define patch_func8_offset1 				0xA4 //5A85C
#define patch_func8_offset2 				0x208 //5A9C0
#define patch_func9 					0x5DF14
#define patch_func9_offset 				0x470 //5E384
#define mem_base2					0x3D90

/* vars */
// TODO: #define open_psid_buf_symbol			0x45218C
#define thread_info_symbol				0x392A30
#endif /* FIRMWARE */

#endif /* __FIRMWARE_SYMBOLS_H_S__ */
