#include <stdio.h>
#include "dog.h"

int main(void)
{
	struct dog dogo;
	dogo.name = "Poppy";
	dogo.age = 15.5;
	print_dog(&dogo);
}
