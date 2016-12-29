#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


void check_oddEven();
void simple_calculator();
void square_number();

int main(){

	//check_oddEven();
	//simple_calculator();
	square_number();
	return 0;
}


void check_oddEven(){

	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	if(num ==0)
		printf("\nThe number is zero\n");
	else if (num%2 == 0)
		printf("\nThe number is even\n");
	else
		printf("\nThe number is odd\n");
}


void simple_calculator(){

	int num1, num2, choice;

	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);

	printf("\n1 Addition");
	printf("\n2 Subtraction");
	printf("\n3 Multiplication");
	printf("\n4 Division");

	printf("\nEnter Choice: ");
	scanf("%d", &choice);

	switch(choice){
		case 1:
			printf("\n%d + %d = %d\n", num1, num2, num1+num2);
			break;
		case 2:
			printf("\n%d - %d = %d\n", num1, num2, num1-num2);
			break;
		case 3:
			printf("\n%d x %d = %d\n", num1, num2, num1*num2);
			break;
		case 4:
			printf("\n%d / %d = %d\n", num1, num2, num1/num2);
			break;
		default:
			printf("\nThis operaton is not possible\n");
	}

}

void square_number(){

	int num = 1;
	int sqr;

	while(num <= 10){
		sqr = num * num;
		printf("Number=%d and its square=%d\n", num, sqr);
		num+= 1;
	}

}