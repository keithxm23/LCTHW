#include <stdio.h>

int main(int argc, char *args[])
{
	int distance = 100;
	float power = 2.345f; //the trailing f is indicates the value is a float
			// if the f is ignored, power will be promoted to a double.
			// http://stackoverflow.com/questions/5026592/1415352
	double super_power = 56789.4532; //float and double both take %f format-specifier
	char initial = 'A'; //char takes single-quotes
	char first_name[] = "Zed"; //char[] needs double-quotes
	char last_name[] = "Shaw";

	printf("You are %d miles away.\n", distance);
	printf("You have %f levels of power.\n", power);
	printf("You have %f super powers.\n", super_power);
	printf("I have an initial %c.\n", initial);
	printf("I have a first name %s. \n", first_name);
	printf("I have a last name %s. \n", last_name);
	printf("My whole name is %s %c. %s.\n", first_name, initial, last_name);

	return 0;
}
