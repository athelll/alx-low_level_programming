#ifndef PROTOTYPES
#define PROTOTYPES

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
* struct type - struct
* @keyword: letter signifying data type
* @function: function pointer
*/
typedef struct type
{
	char keyword;
	void (*function)(va_list);
} datatypes;

#endif
