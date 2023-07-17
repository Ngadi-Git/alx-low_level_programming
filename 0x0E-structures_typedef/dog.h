#ifndef STRTYP
#define STRTYP

/**
  *struct dog - The struct of a dog.
  *@name: name of the dog.
  *@age: age of the dog.
  *@owner: owner of the dog.
  */
struct dog
{
	char *d_name;
	float d_age;
	char *d_owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *d_name, float d_age, char *d_owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *d_name, float d_age, char *d_owner);
void free_dog(dog_t *d);

#endif /*STRTYP*/
