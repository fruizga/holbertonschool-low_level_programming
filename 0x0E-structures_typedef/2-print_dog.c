#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the struct dog
 *@d: structure param
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else
	{
	printf("Name: %s\n", d->name);
	}
	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
	printf("Owner: %s\n", d->owner);
	}
}
