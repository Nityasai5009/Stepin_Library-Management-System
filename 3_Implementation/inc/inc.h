/**
 * @file inc.h
 * @author Cuddapah Nikhil Sai 
 * @brief Libray books management system
 * 
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __INC_H__
#define __INC_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * @brief structure for the book details
 * 
 */
 typedef struct library
{
  char bookname[30];
  char authorname[30];
  int pages;
  float price;
} library;


/**
 * @brief prints the menu 
 * 
 * @return zero  
 */
int menu(void);


/**
 * @brief function to add books to the library
 * 
 * @param library struct object, number of books
 * @return returns the present count of the books 
 */
int add_book(int i, struct library *l, int count);

/**
 * @brief To display the books in the library
 * 
 * @param l -struct object
 * @param count - number of books 
 */
void display(struct library *l, int count);

/**
 * @brief To search a book by its author name
 * 
 * @param l - struct object
 * @param count - number of books
 */
void search_author(struct library *l, int count);

/**
 * @brief To search a book by its book name
 * 
 * @param l - struct object
 * @param count  - number of books
 */
void search_book(struct library *l, int count);

/**
 * @brief To count the total number of books
 * 
 * @param l  - struct object
 * @param count - number of books
 */
void book_count(struct library *l, int count);


#endif