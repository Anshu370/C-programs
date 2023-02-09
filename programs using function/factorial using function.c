#include<stdio.h>
int fact(int num);

int fact(int num){
	int factorial=1;
	for(int i=1; i<=num;i++){
		factorial=factorial*i;
	}
	return factorial;
}
int main(){
	int number, factorial;
	scanf("%d", &number);
	factorial=fact(number);
	printf("%d", factorial);
	return 0;
}