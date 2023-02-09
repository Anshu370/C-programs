#include<stdio.h>

main(){
	int l;
	
	printf("Enter l ");
	scanf("%d", &l);
	
	for(int i=1;i<=l;i++){
		for(int j=1;j<=l;j++){
			if(i<j){
				printf("*");
			}
			else{
				printf(" ");
			}
			
		}
		printf("\n");
	}
}