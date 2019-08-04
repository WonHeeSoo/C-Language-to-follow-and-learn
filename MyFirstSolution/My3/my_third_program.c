#include <stdio.h>
#include <stdbool.h>

void say_hello(void); // prototyping, function declaration

int main()
{
	bool test;
	printf("My 3rd program");
	return 0;
}

void say_hello(void) // function definition
{
	printf("Hello printf\n");

	return;
}