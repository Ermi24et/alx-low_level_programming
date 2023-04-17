#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: return a pointer to a new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int m, n, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(size_t));
	if (dog == NULL)
		return (NULL);
	for (m = 0; name[m]; m++)
		;
	m++;
	dog->name = malloc(m * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < m; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (n = 0; owner[n]; n++)
		;
	n++;
	dog->owner = malloc(n * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < n; i++)
		dog->owner[i] = owner[i];
	return (dog);
}

