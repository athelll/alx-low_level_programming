#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_dog - prints the properties of the dog
  * @d: Dog Struct
  */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	(d->name == NULL) ? printf("Name: (nil)\n")
		: printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	(d->owner == NULL) ? printf("Owner: (nil)\n")
		: printf("Owner: %s\n", d->owner);
}
