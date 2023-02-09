#include<stdio.h>
int natural_num(int num);

int natural_num(int num){
	for(int i=1; i<=num; i++){
		printf("%d\n", i);
	}
}

int main(){
	int number;
	scanf("%d", &number);
	natural_num(number);
}