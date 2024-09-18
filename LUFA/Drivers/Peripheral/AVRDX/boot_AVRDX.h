#pragma once

#define GET_LOCK_BITS

#define boot_spm_busy_wait()     

#define boot_page_write (address)
#define boot_rww_enable() //probably N/A
#define boot_lock_bits_set(lock_bits) //probably N/A

#define boot_page_erase_safe(Address)
#define boot_page_write_safe(Address)
#define boot_page_fill_safe(Address, Word)

#define boot_signature_byte_get(Address)    (1)

#define boot_lock_fuse_bits_get(Address)    (1)
#define boot_lock_bits_set_safe(LockBits)