#include "inc.h"
#include "unity.h"
#include<string.h>
/*#include"add_book.c"
#include"book_count.c"
#include"display.c"
#include"menu.c"
#include"search_author.c"
#include"search_book.c"*/
#include "unity_internals.h"
#include "unity.c"

/**
 * @brief required by unit test framework
 * 
 */
void setUp()
{
}
/**
 * @brief required by unit test framework
 * 
 */
void tearDown()
{
}






/**
 * @brief test function to test the structure members
 * 
 */
void test_details(void)
{
    struct library  l[100];
strcpy(l[0].bookname,"HarryPotter");
strcpy(l[0].authorname,"JKRowling");
l[0].pages= 267;
l[0].price=200.00;


TEST_ASSERT_EQUAL_STRING("HarryPotter",l[0].bookname);
TEST_ASSERT_EQUAL_STRING("JKRowling",l[0].authorname);
TEST_ASSERT_EQUAL_INT(267,l[0].pages);
TEST_ASSERT_EQUAL_FLOAT(200.00,l[0].price);




}







int main()
{
    /**
     * @brief Initiazse the test
     */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_details);
    
    
    

    /* Close the Unity Test Framework */
    return UNITY_END();
}