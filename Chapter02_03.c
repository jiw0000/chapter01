#include<stdio.h>

int main()
{
	int age;
	printf(" age : ");
	scanf_s("%d", &age);
	printf("날짜로 환산하면 %d일", age * 365);
}