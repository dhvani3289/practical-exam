#include<stdio.h>
void div(int n){
	
	if( n%3==0 && n%5==0){ 
		printf("The no. is divisible by 3 & 5 both");
	}
	else{
		printf("The no. is not divisible by 3 & 5 both");
	}

	return 0;
}
main(){
	
   int n;
   
    printf("Enter a number : ");
   	scanf("%d",&n);
	
	div(n);
}

