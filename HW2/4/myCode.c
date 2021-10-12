#include <stdio.h>
#include <math.h>
#define SUCCESS 0

int main(void) {
	int input,quarters,dimes,nickels,pennies;
	printf("Enter an amount of cents: ");
	scanf("%d",&input);
	quarters = input/25;
	input = input-25*quarters;
	dimes = input/10;
	input = input-10*dimes;
	nickels = input/5;
	input = input-5*nickels;
	pennies = input;
	printf("The smallest number of coins for this value is %d quarter(s), %d dime(s), %d nickel(s), and %d pennie(s).\n",quarters,dimes,nickels,pennies);
	return(SUCCESS);
}
