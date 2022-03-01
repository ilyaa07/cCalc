// calculator.c by ilyaa07
// thanks to stackoverflow for helping with if else

#include <stdio.h>
int main(int argc, char const *argv[])
{
	char opt; // function
	int N1, N2; // numbers
	float res; // result
	
	printf("C Calculator by ilyaa07\n");

    printf("Select a function (+, -, *, /): ");
    scanf("%c", &opt); // asks for value of opt

    printf("Pick the first number: ");
    scanf("%d", &N1); // asks for value of N1

    printf("Pick the second number: ");
    scanf("%d", &N2); // asks for value of N2

    
    if(opt == '+'){ // if opt is + do whats below
        res = N1 + N2; 
        printf("%d + %d is: %f", N1, N2, res);
    }
    
    else if(opt == '-'){
        res = N1 - N2;
        printf("%d - %d is: %f", N1, N2, res);
    }
    
    else if(opt == '*'){
        res = N1 * N2;
        printf("%d * %d is: %f", N1, N2, res);
    }
    
    else if(opt == '/'){
        if(N2 == 0){
            printf("Thats a bad idea. Pick something that will actually work: ");
            scanf("%d", &N2);
            getchar();
        }
        res = N1 / N2;
         printf("%d / %d is: %f", N1, N2, res);
    }

    scanf("%d", N1);
    getchar();

    	return 0;
}
