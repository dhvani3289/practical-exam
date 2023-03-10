#include<stdio.h>
main(){
	
	int a,b,c,d;
	
    printf("Enter first no. : ");
	scanf("%d",&a);
	
	printf("Enter second no. : ");
	scanf("%d",&b);
	
    printf("Enter third no. : ");
	scanf("%d",&c);
	
	printf("Enter fourth no. : ");
	scanf("%d",&d);
	
	if(a>b){
		
		if(a>c){
			
			if(a>d){
				printf("A is max");	
			}
			else{
			printf("D is max");	
			}
		}
		else{
			printf("C is max");
		}
	}
	else{
		if(b>c){
			
			if(b>d){
				printf("B is max");
			}
			else{
				printf("D is max");
			}
		}
		else{
			if(c>d){
				printf("C is max");
			}
			else{
				printf("D is max");
			}
		}
	}
	
}

