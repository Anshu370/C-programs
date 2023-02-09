#include<stdio.h>
#include<math.h>

int main(){
	int number, psq;
	
	printf("Enter any range of number");
	scanf("%d", &number);

	
	psq = sqrt(number);
	
	if(psq * psq == number){
		printf("Odd number of factor");
	}
	else{
		printf("Even number of factor");
	}
	
	return 0;
}