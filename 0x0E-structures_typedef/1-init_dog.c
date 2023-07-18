#include <stdlib.h>
#include "dog.h"

/**
  *init_dog - initializes a variable of type struct.
  *@d: pointer to structure.
  *@name: member 1.
  *@age: member 2.
  *@owner: member 3.
  *
  *Return: void.
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
