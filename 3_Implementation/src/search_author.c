#include<inc.h>
/**
 * @brief To search a book by a specific author
 * 
 * @param l - struct object
 * @param count - total number of books
 */
void search_author(struct library *l, int count)
{
    char arNm[30];
          printf("Enter author name : ");
      scanf("%s", arNm);
      for (int i = 0; i < count; i++)
      {
        if (strcmp(arNm, l[i].authorname) == 0)
          printf("%s \t %s\t  %d\t  %f \t \n", l[i].bookname, l[i].authorname, l[i].pages, l[i].price);
      }
      
}