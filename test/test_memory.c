#include "../src/memory.h"
#include <criterion/criterion.h>

Test(MemoryTest, EnsureInit) {
  cr_assert(init(KENBACK_MEMORY_SIZE) == true, "Can init memory");
  cr_assert(read(0) == 0, "Can read address 0 after init");
  cr_assert(read(KENBACK_MEMORY_SIZE - 1) == 0,
            "Can read last address after init");
}

Test(MemoryTest, EnsureRead) {
  cr_assert(init(KENBACK_MEMORY_SIZE) == true, "Can init memory");
  cr_assert(write(0, 0x01) == true, "Can write address 0 with 0x01");
  cr_assert(read(0) == 0x01, "Can read back 0x01 from address 0");
}

Test(MemoryTest, EnsureWrite) {
  cr_assert(init(KENBACK_MEMORY_SIZE) == true, "Can init memory");
  cr_assert(read(0) == 0, "Can read O after init");
  cr_assert(write(0, 0x01) == true, "Can write address 0 with 0x01");
  cr_assert(read(0) == 0x01, "Can read back 0x01 from address 0");
}
