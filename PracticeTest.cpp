/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_not_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Not a palindrome");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("racecar");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, symbol_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("[;");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, not_sorted)
{
    Practice obj;
    int a=3;
    int b=6;
    int c=3;
    bool actual = obj.sortDescending(a,b,c);
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, sorted)
{
    Practice obj;
    int a=2;
    int b=4;
    int c=6;
    bool actual = obj.sortDescending(a,b,c);
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, invalid_input)
{
    Practice obj;
    int a=0;
    int b=0;
    int c=0;
    bool actual = obj.sortDescending(a,b,c);
    ASSERT_FALSE(actual);
}
