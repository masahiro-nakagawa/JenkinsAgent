#include <stdio.h>
#include <testRunner.h>
#include "Minus.h"

static unsigned int TestMinus(void);

/** Main function. */
int main(void)
{
    return (int) testRunner(TestMinus);
}

static unsigned int TestMinus(void)
{
    unsigned int err;
    int ans;
    int data1;
    int data2;
    
    // Test case 1, 2
    data1 = 5;
    data2 = 20;
    err = Minus(data1,data2,&ans);
    TEST_ASSERT_EQUALS((data1 - data2),(int)ans);
    TEST_ASSERT_EQUALS(err,0);

    // Test case 3, 4
    data1 = 84;
    data2 = 97;
    err = Minus(data1,data2,&ans);
    TEST_ASSERT_EQUALS((data1 - data2),(int)ans);
    TEST_ASSERT_EQUALS(err,0);
    
    // Test case 5
    data1 = -100;
    data2 = 1;
    err = Minus(data1,data2,&ans); // do Test
    TEST_ASSERT(err != 0);

    // Test case 6
    data1 = 0;
    data2 = -200;
    err = Minus(data1,data2,&ans); // do Test
    TEST_ASSERT(err != 0);

    // Test case 7
    data1 = -1;
    data2 = 99;
    err = Minus(data1,data2,&ans); // do Test
    TEST_ASSERT(err != 0);
    return 0;
}
