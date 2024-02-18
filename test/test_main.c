#include "../src/main.h"
#include <criterion/criterion.h>

Test(MainTest, EnsureReturnGood) {
  cr_assert(0 == appMain(), "assert appMain return 0");
}
