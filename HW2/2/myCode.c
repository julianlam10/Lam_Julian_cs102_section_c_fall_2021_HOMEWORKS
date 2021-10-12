#include <stdio.h>
#define SUCCESS 0

int main(void) {
	int minutes;
	printf("Enter a number of minutes: ");
	scanf("%d",&minutes);
	int outputmin = minutes%60;
	int outputhr = minutes/60;
	printf("This is equivalent to %d hour(s) and %d minutes\n",outputhr,outputmin);
	return(SUCCESS);
}
