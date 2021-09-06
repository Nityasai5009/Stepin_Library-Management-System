#include<inc.h>
/**
 * @brief to display the details of all the books in the library
 * 
 * @param l - struct library
 * @param count - number of books in the library
 */
void display(struct library *l, int count)
{
    printf("you have entered the following information\n");
      for (int i = 0; i < count; i++)
      {
        printf("book name = %s", l[i].bookname);

        printf("\t author name = %s", l[i].authorname);

        printf("\t  pages = %d", l[i].pages);

        printf("\t  price = %f", l[i].price);

        printf("\n");
      }
      
}
