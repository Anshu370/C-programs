#include<stdio.h>
int fibo(int n){
	if(n==1) return 1;
	if(n==2) return 2;
	else{
		return ("%d", fibo(n-1)+fibo(n-2));
	}
}

int main(){
	int a;
	scanf("%d", &a);
	printf("%d", fibo(a));
	
}