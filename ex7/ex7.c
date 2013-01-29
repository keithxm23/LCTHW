#include <stdio.h>

int main(int argc, char *args[])
{
	int bugs = 100;
	double bug_rate = 1.2;

	printf("You have %d bugs at the imaginary rate of %f.\n",bugs, bug_rate);

	long universe_of_defects = 1L * 1024L * 1024L * 1024L;
	printf("The entire universe has %ld bugs.\n", universe_of_defects);
		//trailing ld to print as long decimal

	double expected_bugs = bugs * bug_rate;
	printf("You are exected to have %f bugs.\n", expected_bugs);

	double part_of_universe = expected_bugs / universe_of_defects;
	printf("That is only a %e portion of the universe.\n", part_of_universe);
		//trailing e to print in scientific notation

	//this makes no sense, just a demo of something weird
	char nul_byte = '\0'; //this is effectively the number 0
	int care_percentage = bugs * nul_byte; //ugly hack.. 100 * 0 = 0
	printf("Which means you should care %d%%.\n", care_percentage);
		//escaping % using %%

	//extra cred

	//printf("null byte as %%s: %s", nul_byte);
	// ^fails. expects %d since nul_byte is an int.

	printf("null byte as %%c: %c.\n", nul_byte);
	// ^works. prints null for %c

	return 0;
}
