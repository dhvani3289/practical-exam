#include<stdio.h>
main(){

    int n,f,l,sum;
    
    printf("Enter a number : ");
	scanf("%d",&n);
	
	l=n%10;
	printf("The last number of the digit is : %d\n",l);
	

	while(n>10){
		
		n=n/10;
	}
	
	n=f;
	
	sum=f+l;
	
	printf("The sum of first & last digit is : %d",sum);
}
	

	
	




