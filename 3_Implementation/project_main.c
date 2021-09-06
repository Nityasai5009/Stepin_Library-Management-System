#include"inc.h"
/*#include"src/menu.c"
#include"add_book.c"
#include"display.c"
#include"search_author.c"
#include"search_book.c"
#include"book_count.c"*/


int main()
{
  struct library l[100];
 int count = 0;
    int j = 0;
    int  i = 0;
    char *str;

   /* Initial memory allocation */
   str = (char *) malloc(15);
   free(str);

  while (j != 6)
  {
    int a = menu();

    printf("\n\nEnter one of the above : ");
    scanf("%d", &j);

    switch (j)
    {
    /* Add book */
    case 1:
     count = add_book(i,l,count);

      break;
    case 2:
      
       display(l,count);

      break;

    case 3:
      search_author(l,count);

      break;

    case 4:
       search_book(l,count);

      break;

    case 5:
       book_count(l,count);
       
      break;
    case 6:
      exit(0);
    default:
      printf("\nWrong Option! Please try again\n");

    }
  }
  return 0;
}


