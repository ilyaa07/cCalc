#include <stdio.h>
#include <stdlib.h>



int main(void){
    float x, y, res;
    char opr;

    printf("Calculator by ilyaa07\n");
    printf("******************************************************\n");
    printf("\n");
    printf("+ = Addition\n");
    printf("\n");
    printf("- = Subtraction\n");
    printf("\n");
    printf("* = Multiplication\n");
    printf("\n");
    printf("/ = Division\n");
    printf("\n");
    printf("q = Quit\n");
    printf("\n");
    printf("******************************************************\n");
    printf("\nWhat would you like to do: ");
    scanf("%c", &opr);

    printf("\n");
    printf("First number?\n");
    scanf("%f", &x);
    printf("\n");
    printf("Second number?\n");
    scanf("%f", &y);
    printf("\n");

    switch(opr)
    {
    case '+':
        printf("%0.f + %0.f = %f\n", x, y, x+y);
        printf("\nPress any button to continue\n");
        getch();
        break;
    case '-':
        printf("%0.f - %0.f = %f", x, y, x-y);
        printf("\nPress any button to continue\n");
        getch();
        break;
    case '*':
        printf("%0.f * %0.f = %f", x, y, x*y);
        printf("\nPress any button to continue\n");
        getch();
        break;
    case '/':
        if(y == 0){
            printf("You cant do that ya know. Pick a divider: ");
            scanf("%f", &y);
        }
        printf("%0.f / %0.f = %f", x, y, x/y);
        printf("\nPress any button to continue\n");
        getch();
        break;

    case 'q':
        exit(0);
        break;

    default:
        printf("\n%c is not a valid operation\n", opr);
        printf("Press any button to continue\n");
        scanf("%d");
        getch();

    }


    return 0;
}
