#include <stdio.h>

int main(int argc, char const *argv[])
{
	char opr; // operator
	double x, y; // the 2 numbers
	int i = 1; // to loop the program

	printf("\nC calculator by ilyaa07");
    printf("\n");
    
    while(i < 2)
    {
	  printf("\nPick an operator (+, -, *, /): ");
	  scanf(" %c", &opr);
      getchar();
	  printf("\nPick 2 numbers ");
	  scanf("%lf %lf", &x, &y);

	  switch(opr)
	  {
		  case'+':
        	printf("\n%.1lf + %.1lf = %.1lf\n", x, y, x+y);
			break;
			
		  case'-':
			printf("\n%.1lf - %.1lf = %.1lf\n", x, y, x-y);	
			break;

		  case'*':
			printf("\n%.1lf * %.1lf = %.1lf\n", x, y, x*y);	
			break;
	
		  case'/':
		    if(y == 0)
		    {
		        printf("\nY can't be 0. Choose a new value: ");
		        scanf("%lf", &y);
		    }
			printf("\n%.1lf / %.1lf = %.1lf\n", x, y, x/y);	
			break;
		
		  default:  
			printf("\nPick a valid operator.\n");
	  }
	  printf("\n***************************************************\n");
	  
    }
		
    return 0;
}