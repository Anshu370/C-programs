#include<stdio.h>

main(){
	int l,b;
	
	printf("Enter l and b");
	scanf("%d %d", &l,&b);
	
	for(int i=1;i<=l;i++){
		for(int j=1;j<=b;j++){
			printf("*");
		}
		printf("\n");
	}
}