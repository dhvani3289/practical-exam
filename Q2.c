#include<stdio.h>
main(){
	
   float n,a;

	printf("Enter the number of units : 1");
	scanf("%f",&n);
	
	if(n>0 && n<=50){
		a = n*0.5;
		printf("The total electricity bill is : %f",a);
	}
	else if(n>50 && n<=150){
     	a = 50*0.5 + (n-50)*0.75;
		printf("The total electricity bill is : %f",a);
	}
	
	else if(n>150 && n<=250){
     	a = 50*0.5 + 100*0.75 + (n-150)*1.2;
		printf("The total electricity bill is : %f",a);
	}
	
	else {
     	a = 50*0.5 + 100*0.75 + 100*1.2 + (n-250)*1.5;
		printf("The total electricity bill is : %f",a);
	}
	

}
