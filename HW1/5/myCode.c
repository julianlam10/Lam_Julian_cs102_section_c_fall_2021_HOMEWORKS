#include <stdio.h>
#define SUCCESS 0

int letters(char str1[100]) {
	
	int variable1,variable2;
	
	
	char a[] = {"#####\n#   #\n#   #\n#####\n#   #\n#   #\n"};
	char b[] = {"#####\n#   #\n#### \n#   #\n#   #\n#####\n"};
	char c[] = {"#####\n#    \n#    \n#    \n#    \n#####\n"};
	char d[] = {"#### \n#   #\n#   #\n#   #\n#   #\n#### \n"};
	char e[] = {"#####\n#   #\n#####\n#   #\n#   #\n#####\n"};
	char f[] = {"#####\n#   #\n#   #\n#####\n#    \n#    \n"};
	char g[] = {"#####\n#    \n#    \n#  ##\n#   #\n#####\n"};
	char h[] = {"#   #\n#   #\n#####\n#   #\n#   #\n#   #\n"};
	char i[] = {"#####\n  #  \n  #  \n  #  \n  #  \n#####\n"};
	char j[] = {"#####\n   # \n   # \n   # \n#  # \n#### \n"};
	char k[] = {"#   #\n#   #\n#  # \n###  \n#  # \n#   #\n"};
	char l[] = {"#    \n#    \n#    \n#    \n#    \n#####\n"};
	char m[] = {"#   #\n## ##\n# # #\n#   #\n#   #\n#   #\n"};
	char n[] = {"#   #\n##  #\n# # #\n# # #\n#  ##\n#   #\n"};
	char o[] = {"#####\n#   #\n#   #\n#   #\n#   #\n#####\n"};
	char p[] = {"#####\n#   #\n#   #\n#####\n#    \n#    \n"};
	char q[] = {"#####\n#   #\n#   #\n#  ##\n#####\n     #\n"};
	char r[] = {"#####\n#   #\n#####\n#  # \n#   #\n#   #\n"};
	char s[] = {"#####\n#    \n#    \n#####\n    #\n    #\n"};
	char t[] = {"#####\n  #  \n  #  \n  #  \n  #  \n  #  \n"};
	char u[] = {"#   #\n#   #\n#   #\n#   #\n#   #\n#####\n"};
	char v[] = {"#   #\n#   #\n#   #\n # # \n # # \n  #  \n"};
	char w[] = {"#   #\n#   #\n#   #\n# # #\n## ##\n#   #\n"};
	char x[] = {"#   #\n#   #\n # # \n  #  \n # # \n#   #\n"};
	char y[] = {"#   #\n#   #\n # # \n  #  \n  #  \n  #  \n"};
	char z[] = {"#####\n   # \n  #  \n  #  \n #   \n#####\n"};
	
	
	char arr1[26] = {97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122};	
	
	char* arr2[26] = {a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z};
	
	
	printf("%s\n",str1);
	
	for(variable1=0;variable1<25;variable1++){/*SUPPOSED to check if each character in the string is equal to a letter and print the letter if true*/
		
		for(variable2=0;variable2<25;variable2++) {
			
			if(str1[variable1]==arr1[variable2]) {
				printf("%s\n",arr2[variable2]);
			}
		}
	}

}
int main(void) {
	char input[100]={};
	printf("Input a string: ");
	scanf("%s",input);
	letters(input);
	return(SUCCESS);
	
}
