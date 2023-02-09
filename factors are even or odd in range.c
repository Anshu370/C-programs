#include<stdio.h>
#include<math.h>

int main(){
	int number, psq;
	
	printf("Enter any range of number");
	scanf("%d", &number);

	for(int i=1;i<=number;i++){
		psq = sqrt(i);
		
		if(psq * psq == i){
			printf(" %d Has Odd number of factor\n",i);
		}
		else{
			printf(" %d Has Even number of factor\n",i);
		}	
	}
	return 0;
}