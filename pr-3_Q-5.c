#include <stdio.h>

void main(){
	int number,remainder,origin,reverse=0,cnt=0;
	
	printf("Enter a 3 digit number:");
	scanf("%d",&number);
	
	while(number != 0){
		cnt++;
		number = number/10;
	}
	
	do{
	printf("ERROR:INVALID INPUT \n ");		
	printf("Please enter a 3 digit number:");
	scanf("%d",&number);
		
	}while(cnt<2);

	
	while(number != 0){
		remainder = number % 10;
		reverse = reverse * 10 + remainder;
		number = number / 10;
	}
	
	origin = number;
	
	if(reverse == origin){
		printf("palidrome no \n");
	}else{
		printf("not a palidrone number \n");
	}
	
}
