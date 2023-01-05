#include<stdio.h>
void one_three(void);
void one(void);
void two(void);


int main(void)
{
	printf("starting now: \n");
	one_three();
	printf("done!");

	return 0;
}

void one_three(void)
{
	one();  two(); printf("three\n");
	
}

void one(void)
{
	printf("one\n");
}

void two(void)
{
	printf("two\n");
}

