#include <stdlib.h>
#include "dog.h"

/**
  *new_dog - creates a new dog
  *@name: member 1.
  *@age: member 2.
  *@owner: member 3.
  *
  *Return: NULL if it fails.
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int indx, len, lenT;

	struct dog *n_dog = NULL;

	len = 0;
	while (name[len] != '\0')
		len++;
	lenT = 0;
	while (owner[lenT] != '\0')
		lenT++;

	n_dog = malloc(sizeof(struct dog));
	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->name = malloc(len + 1);
	if (n_dog->name == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	n_dog->owner = malloc(lenT + 1);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}
	for (indx = 0; indx <= len; indx++)
		n_dog->name[indx] = name[indx];
	for (indx = 0; indx <= lenT; indx++)
		n_dog->owner[indx] = owner[indx];
	n_dog->age = age;
	return (n_dog);
}
