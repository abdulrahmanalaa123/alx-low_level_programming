#include "dog.h"
/**
 *Description: init_dog - description for task.
 *@d: the object
 *@name: naem fo
 *@age: age of dgo
 *@owner:owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
