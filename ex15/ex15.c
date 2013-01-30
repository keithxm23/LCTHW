/*  THE POINTER LEXICON

type *ptr
    "a pointer of type named ptr"
*ptr
    "the value of whatever ptr is pointed at"
*(ptr + i)
    "the value of (whatever ptr is pointed at plus i)"
&thing
    "the address of thing"
type *ptr = &thing
    "a pointer of type named ptr set to the address of thing"
ptr++
    "increment where ptr points"

*/

#include <stdio.h>

int main(int argc, char *argv[])
{
	// create two arrays we care about
	int ages[] = {23, 43, 12, 89, 2};
	char *names[] = {"Alan", "Frank", "Mary", "John", "Lisa"};

	//Safely get the size of ages
	int count = sizeof(ages) / sizeof(int);
	int i = 0;

	//first way using indexing
	for(i = 0; i < count; i++)
	{
		printf("%s has %d years alive.\n", names[i], ages[i]);
	}

	printf("-----\n");

	//setup the pointers to the start of the arrays
	int *cur_age = ages;
	/*
	To C, ages is a location in the computer's memory where all of these integers start. It is also an address,
	 and the C compiler will replace anywhere you type ages with the address of the very first integer in ages.
	*/

	char **cur_name = names;


	/*
	A pointer is simply an address pointing somewhere inside the computer's memory, with a type specifier 
	 so you get the right size of data with it
	*/

	//second way using pointers
	for(i = 0; i < count; i++)
	{
		printf("%s is %d years old.\n", *(cur_name+i), *(cur_age+i));
	}

	printf("------\n");

	//third way pointers are just arrays
	for(i = 0; i < count; i++)
	{
		printf("%s is %d years old again.\n", cur_name[i], cur_age[i]);
	}

	printf("-------\n");

	//fourth way with pointers in a stupid complex way
	for(cur_name = names, cur_age = ages; 
		(cur_age - ages) < count;
		cur_name++, cur_age++)
	{
		printf("%s lived %d years so far.\n", *cur_name, *cur_age);
	}

	return 0;
}
