#include<stdio.h>
int power(int num, int pow){
	if(pow==0) return 1;
	else return num*power(num, pow-1); 
}

int main(){
	int num;
	int pow;
	scanf("%d %d", &num, &pow);
	printf("%d", power(num, pow));
}