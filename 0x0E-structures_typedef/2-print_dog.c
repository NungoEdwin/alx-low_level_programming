#include <stdio.h>
#include "dog.h"
/**
 * print_dog -'''
 * @d:..
 */
void print_dog(struct dog *d)
{
	if (d)
		printf("Name: %s\nAge: %f\nOwner: %s\n ", d->name, d->age, d->owner);
	else if (d->name == NULL)
		printf("Name : (Nil)");
	else if (d->owner == NULL)
		printf("Owner : (Nil)");
	else
		return;
}
