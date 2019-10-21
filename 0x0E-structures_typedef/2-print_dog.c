#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the struct dog
 *@d: structure param
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	char *namec = (((*d).name) ? ((*d).name) : "(nil)");
	char *ownerc = ((*d).owner) ? ((*d).owner) : "(nil)";

	printf("Name: %s\n", namec);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", ownerc);
}
