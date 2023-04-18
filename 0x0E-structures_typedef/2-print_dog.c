#include "dog.h"
#include <stdio.h>
/**
 *Description: print_dog - description for task.
 *@d: the dog pointer
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", *d.name, *d.age, *d.owner);
	}
	else
		printf("nil\n");
}
