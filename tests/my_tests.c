#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "ci_test.h"

int value_plus_one(int value);

Test(value_plus_one, simple_add)
{
    int value = 1;
    cr_assert_eq(value_plus_one(value), 2);
}
