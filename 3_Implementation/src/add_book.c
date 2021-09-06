#include<inc.h>
/**
 * @brief implemenation of adding books to the library
 * 
 * @param ith book to be added 
 * @param l - struct object 
 * @param count - number of books
 * @return int number of books added
 */
int add_book(int i, struct library *l, int count)
{
      printf("Enter book name = ");
      scanf("%s", &l[i].bookname);

      printf("Enter author name = ");
      scanf("%s", &l[i].authorname);

      printf("Enter pages = ");
      scanf("%d", &l[i].pages);

      printf("Enter price = ");
      scanf("%f", &l[i].price);
      count++;
      return count;
}