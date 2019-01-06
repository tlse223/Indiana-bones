//Hello World!!

#include <stdio.h>

int main()
{
	printf("Hello, World!");
	return 0;
}

//Variables and types

//Integers:
	char
	int
	short
	long
	long long
//Unsigned integers:
	unsigned char
	unsigned int
	unsigned long
	unsigned long long
//Floating point numbers:
	float
	double
	//NO BOOLEAN TYPE
		#define BOOL char
		#define FALSE 0
		#define TRUE 1 //SEE STRINGS
//Defining variables
	int foo;
	int bar = 1;
	printf("%d",bar);


//Arrays
	int numbers[10];
	numbers[0]=10;
	numbers[1]=20;
	numbers[2]=30; //and so on.

	printf("the seventh element is %d", numbers[6]);


//Multidimensional arrays

	type name[size1][size2]...[sizen];
	int a[3][4] = { {0,1,2,3}, {4,5,6,7}, {8,9,10,11}};
	//same as {0,1,2,3,4,5,6,7,8,9,10,11}
	
//Strings

	//Only for reading
	char * name = "John Smith";
	//local character array
	char name[] = "John Smith";
	/* 
	 * String termination equivalent to zero at the end of each character array
	 */

	//With printf
	char * name = "John Smith";
	int age = 27;
	printf("%s si %d years old.\n", name, age); //Always add the newline character

	//String length
	char * name = "Tiffany";
	printf("%d\n", strlen(name));

	//String comparison
	cahr * = "John";
	if (strncmp(name, "John", 4) ==0)
	{
		printf("Hello, John!\n");	
		
	}
	else
	{
		printf("You are not John. Go away.\n");
	}

	//Concatenation
	strncat(string1,string2, 4); //4 is the nax number of characters to add to the end
	print("%s\n",string1);



//For loops
	int i;
	for (i=0; i<10; i++)
	{
		printf("%d\n", i);
	}


//While loops

	int n=0;
	while (n<10)
	{
		//Do something
		n++;
	}

//loop breaks
	int n=0;
	while(1) //with 1, will do something until told to stop
	{
		n++;
		if (n==10)
		{
			break;//can use continue if you don't want to stop the loop, but want 
					//to go back to the beginning
		}
	}

//FUNCTIONS

int foo(int bar)
{
    /* do somthing */
    return bar *2;
}

int main()
{
    foo(1);
}


//MORE CORRECT WAY TO USE BAR

int foo(int bar);

int main()
{
    printf("The value of foo is %d", foo(1));
    
}

int foo(int bar)
{
    return bar+1;
}
//use void when they don't do anything

