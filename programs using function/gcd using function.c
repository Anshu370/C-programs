#include<stdio.h>

int gcd(int n1, int n2);

int gcd(int n1, int n2){
	int n, reminder, quotient;
	
	if(n1<n2){
		n = n1;
		n1 = n2;
		n2 = n;
	} 
	for(;;){
		if(n2%n1==0){
			printf("%d", n1);
			break;
		}
		else{
			reminder = n2%n1;
			n2 = n1;
			n1 = reminder;
		}
	}	
}

int main(){
	int a,b;
	printf("Enter two number");
	scanf("%d", &a);
	scanf("%d", &b);
	gcd(a, b);
	return 0;
}