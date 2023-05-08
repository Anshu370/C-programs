#include<stdio.h>
int hcf(int num1, int num2){
	int Reminder;
	Reminder = num1%num2;
	if(Reminder<=0){
		return (num2);
	}               
	else{
		return hcf(num2, Reminder);
	}                     
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);                   
	printf("%d", hcf(a, b));
}
