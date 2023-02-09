#include<stdio.h>
int sum_of_natural_num(int num);

int sum_of_natural_num(int num){
	int sum = 0;
	for(int i=1; i<=num; i++){
		sum +=i;
	}
	return sum;
}

int main(){
	int number, ans;
	scanf("%d", &number);
	ans = sum_of_natural_num(number);
	printf("%d", ans);
}