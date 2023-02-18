#include<stdio.h>
int hcf(int num1, int num2){
	int Reminder;
	Reminder = num1%num2;
	if(Reminder<=0){
		return (num1/num2);
	}               
	else{
		num1=num2;
		num2=Reminder;
		return hcf(num1, num2);
	}                     
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);                   
	printf("%d", hcf(a, b));
}