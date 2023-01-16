#ifndef DOG_H
#define DOG_H

/**
 * struct dog - define a new type struct dog
 * @name: 1st element
 * @age: 2nd element
 * @owner: 3rd element
 *
 * Description:  Define a new type struct dog with the following elements:
 *	name - takes the type char *
 *	age - takes the type float
 *	owner - takes the type char *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H */
