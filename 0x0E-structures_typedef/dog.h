#ifndef dog_h
#define dog_h

/**
 * struct dog - a dog's data
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: collects total data of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
