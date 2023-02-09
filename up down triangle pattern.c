#include<stdio.h>

int main(){
	int a, ceil_value, floor_value;
	printf("Enter odd value to get pattern");
	scanf("%d", &a);
	ceil_value = ceil(a/2)+1;
	floor_value = floor(a/2);
	
	for(int i=1;i<=a;i++){
		for(int j=1;j<=a;j++){
			
			if(i<=ceil_value){
				
				if(j>=ceil_value-i && j<=floor_value+i){
					printf("*");
				}
				else{
					printf(" ");
				}
			}
			
			else{
				
				if(j>=floor_value && j<=a-ceil(a/2)){
					printf("*");
				}
				else{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	return 0;
}