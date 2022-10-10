#include <stdio.h>
#include "dog.h"

/**
  * init_dog - creates a dog structs with other parameters.
  * @d: Struct
  * @name: Name
  * @age: Age
  * @owner: Owner
  * Return: returns void.
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
