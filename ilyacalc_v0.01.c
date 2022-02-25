//ilyaCalc: Basic C calculator made by a 13 yr old
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int X;
	int Y;
	
	
	printf("Enter first number: ");
	scanf("%d", &X);
	
    printf("\n");
	
	printf("\nEnter second number: ");
	scanf("%d", &Y);
	
	printf("\n");
	
	int Z = X+Y;
	printf("\nAnswer = %d", Z);

	return 0;
}