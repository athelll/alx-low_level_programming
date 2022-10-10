#ifndef DOG_H
#define DOG_H

/**
  * struct dog - holds properties of a dog
  * @name: Name of dog
  * @age: Age of dog
  * @owner: Owner of Dog
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
