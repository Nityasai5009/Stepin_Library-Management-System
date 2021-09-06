#include<inc.h>
/**
 * @brief To search a book by its name
 * 
 * @param l - struct object  
 * @param count - total number of books
 */

void search_book(struct library *l, int count)
{
      char  bookNm[30];
      printf("Enter book name : ");
      scanf("%s", bookNm);
      for (int i = 0; i < count; i++)
      {
        if (strcmp(bookNm, l[i].bookname) == 0)
          printf("%s \t %s \t %d \t %f \t \n", l[i].bookname, l[i].authorname, l[i].pages, l[i].price);
      }


}
