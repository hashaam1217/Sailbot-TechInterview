#include "gtest/gtest.h"
#include "standard_calc.h"

//Testing BountTo180Test() function
TEST(BoundTo180Test, PositiveInput) 
{
    float input = 135.0;
    float expected_output = 135.0;
    float actual_output = bound_to_180(input);
    EXPECT_EQ(expected_output, actual_output);
}

TEST(BoundTo180Test, Over180Input) 
{
    float input = 200.0;
    float expected_output = -160.0;
    float actual_output = bound_to_180(input);
    EXPECT_EQ(expected_output, actual_output);
}

TEST(BoundTo180Test, UnderNeg180Input) 
{
    float input = -200.0;
    float expected_output = 160.0;
    float actual_output = bound_to_180(input);
    EXPECT_EQ(expected_output, actual_output);
}


//Testing IsAngleBetweenTest
TEST(IsAngleBetweenTest, InsideRange) 
{
    float first_angle = 0;
    float middle_angle = 45;
    float second_angle = 90;
    bool expected_output = true;
    bool actual_output = is_angle_between(first_angle, middle_angle, second_angle);
    EXPECT_EQ(expected_output, actual_output);
}

TEST(IsAngleBetweenTest, OutsideRange) 
{
    float first_angle = 45;
    float middle_angle = 90;
    float second_angle = 270;
    bool expected_output = false;
    bool actual_output = is_angle_between(first_angle, middle_angle, second_angle);
    EXPECT_EQ(expected_output, actual_output);
}


//Redudant CuTest code
/*
#include "stdio.h"
#include "cutest/CuTest.h"
#include "standard_calc.h"

**************** Tests for bound_to_180() *******************
void test_bound_basic1(CuTest *tc) {
    CuAssertDblEquals(tc, 0, bound_to_180(0), 0.0001);
}

**************** Tests for is_angle_between() *******************
void test_between_basic1(CuTest *tc) {
    CuAssertTrue(tc, is_angle_between(0, 1, 2));
}

int main(int argc, char const *argv[]) {
    CuString *output = CuStringNew();
    CuSuite *suite = CuSuiteNew();

    SUITE_ADD_TEST(suite, test_bound_basic1);
    SUITE_ADD_TEST(suite, test_between_basic1);

    CuSuiteRun(suite);
    CuSuiteSummary(suite, output);
    CuSuiteDetails(suite, output);
    printf("%s\n", output->buffer);

    return suite->failCount > 0 ? 1 : 0;
}
*/