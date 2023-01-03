#include<stdio.h>

int main(void) {
	
	char ch;

	scanf_s("%c", &ch);
	while (ch != 'g')
	{
		printf("%c", ch);
		scanf_s("%c", &ch);
	}
	return 0;
}