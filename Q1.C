#include<stdio.h>
main(){
	
	char a[50];
	char b,c;
	 
	printf("Enter a string");
	scanf("%s",a);
	
    strcpy(b,a);
	strrev(b);
	
	printf("The reverse of the string is : %s",b);
	c = strcmp(a,b);
	
	if(c==0){
		printf("It is a palindrome word");
	}
	else{
		printf("It is not a palindrome word");	
	}
}


