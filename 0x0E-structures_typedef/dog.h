#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog data structure
 * @name: name is here
 * @age: the age
 *
 * @owner: the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 * dog_t - dog structure typedef
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void print_dog(struct dog *d);

void free_dog(dog_t *d);
#endif
