#include <stdio.h>
#define SUCCESS 0
float mean(float a,float b,float c,float d,float e) {
	float result = (a+b+c+d+e)/5;
	return result;
}
int swap(int *x,int *y){
		int temp = *x;
		*x = *y;
		*y = temp;
/*I don't quite understand what pointers are/do */

}
int median(int a,int b,int c,int d,int e) {
	int result,temp,j,k;
	int medianArray[]={a,b,c,d,e};
	for(j=0;j<4;j++) /*Iterates sorting code*/
		for(k=0;k<4-j;k++)
			if(medianArray[k] > medianArray[k+1])
				swap(&medianArray[k],&medianArray[k+1]);
				/*Swaps if k > k+1*/
	result = medianArray[2];
	return result;


}

int mode(int a,int b,int c,int d,int e) {
	int result,i,l,currentMax=0,count=0;
	int modeArray[]={a,b,c,d,e};
	for(i=0;i<=4;i++){
		int count = 0;/*Resets counter to 0*/
		for(l=0;l<=4;l++) {
			if(modeArray[l] == modeArray[i])
				count++;/*Counts how many times a number appears*/
		}
		if(count > currentMax) { /*Checks to see if that is the greatest number of times that number appears*/
			currentMax = count;
			result = modeArray[i];
		}
	}
	
	if (currentMax == 1)
		printf("There is no mode.\n");
	else
		printf("The mode of these integers is: %d\n",result);
	return result;


}
int main(void) {
	int input1,input2,input3,input4,input5,median5,mode5,n;
	float mean5;
	printf("Enter 5 integers: ");
	scanf("%d",&input1);
	scanf("%d",&input2);
	scanf("%d",&input3);
	scanf("%d",&input4);
	scanf("%d",&input5);
	printf("You entered: %d %d %d %d %d\n",input1,input2,input3,input4,input5);
	
	mean5 = mean(input1,input2,input3,input4,input5);
	printf("The mean of these integers is: %f\n",mean5);
	median5 = median(input1,input2,input3,input4,input5);
	printf("The median of these integers is: %d\n",median5);
	mode5 = mode(input1,input2,input3,input4,input5);
	return(SUCCESS);
}
