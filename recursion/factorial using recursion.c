#include<stdio.h>
int fact(int a){
	if(a==0) return 1;
	else return a*fact(a-1);
}

int main(){
	int num;
	scanf("%d", &num);
	printf("%d", fact(num));
}