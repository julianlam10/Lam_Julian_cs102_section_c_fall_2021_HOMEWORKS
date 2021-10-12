#include <stdio.h>
#define SUCCESS 0


int main() {
	int height,width;
	printf("Enter the dimensions of a rectangle: ");
	scanf("%d",&width);
	scanf("%d",&height);
	int perimeter = 2*width + 2*height;
	printf("The perimeter of a %dx%d rectangle is: %d\n",width,height,perimeter);
	return SUCCESS;

}
