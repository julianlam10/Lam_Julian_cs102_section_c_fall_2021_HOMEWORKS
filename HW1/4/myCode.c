#include <stdio.h>
#define SUCCESS 0

char charSwap(char* x[],char* y[]) { /*Something with pointers makes these two functions different*/
	char* temp = *x;
	*x = *y;
	*y = temp;
}
int asciiSwap(char *x,char *y) {
	char temp = *x;
	*x=*y;
	*y=temp;
}
int sort(char a[],char b[],char c[]) {
	int i,j;
	char* arr[3] = {a,b,c}; /*defines arr as an array of the 3 strings*/
	char asciiArr[3] = {a[0],b[0],c[0]}; /*defines asciiArr as an array of the ASCII values of the first letters of the strings*/
	for(i=0;i<2;i++){ 
		for(j=0;j<2-i;j++) {	
			if(asciiArr[j]>asciiArr[j+1]) {/*Swaps the strings if the first character ascii is greater*/
				charSwap(&arr[j],&arr[j+1]);
				asciiSwap(&asciiArr[j],&asciiArr[j+1]);
			}
		}	
	
	}
	printf("In alphabetical order: %s %s %s\n",arr[0],arr[1],arr[2]);
}

int main() {
		
	char str1[10],str2[10],str3[10];
       	printf("Enter 3 strings: ");	
	scanf("%s",str1);
	scanf("%s",str2);
	scanf("%s",str3);
	printf("You entered: %s %s %s\n",str1,str2,str3);
	sort(str1,str2,str3);
	return(SUCCESS);
}
