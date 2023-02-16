#include<stdio.h>
int power(int num, int pow){
	if(pow==0){
		return 1;
	} 
	else{
		if(pow%2==0){
			return power(num,pow/2)*power(num, pow/2);
		} 
		else{
			return num* power(num,pow/2)*power(num, pow/2);
		}
	}
}
int main()
{
	int num;
	int pow;
	scanf("%d %d", &num, &pow);
	printf("%d", power(num, pow));
}
