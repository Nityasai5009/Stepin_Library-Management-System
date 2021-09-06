#include<inc.h>
/**
 * @brief To display a simple menu to chose the options
 * 
 * @return zero
 */
int menu(void)
{
    printf("\n\n1. Add the details of the book\n2. Display the details of the book\n");
    printf("3. Display the books by a specific author\n");
    printf("4. Display the books with specific name\n");
    printf("5. Display the total number of books\n");
    printf("6. Exit");
    return 0;
}