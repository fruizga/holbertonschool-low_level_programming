#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of new dog
 * @age: owner of new dog
 * @owner: owner of new dog
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len1, len2, i;
	dog_t *dogger;

	len1 = 0;
	len2 = 0;

	while (name[len1])
		len1++;
	while (owner[len2])
		len2++;
	dogger = malloc(sizeof(dog_t));
	if (dogger == NULL)
	{
		return (NULL);
	}

	dogger->name = malloc((len1 + 1) * sizeof(char));
	if (dogger->name == NULL)
	{
		free(dogger->name);
		free(dogger);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		dogger->name[i] = name[i];
	dogger->age = age;
	dogger->owner = malloc((len2 + 1) * sizeof(char));
	if (dogger->owner == NULL)
	{
		free(dogger->owner);
		free(dogger->name);
		free(dogger);
		return (NULL);
	}
	for (i = 0; i < len2; i++)
		dogger->owner[i] = owner[i];
	return (dogger);
}
