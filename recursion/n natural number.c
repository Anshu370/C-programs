#include<stdio.h>
int n_natural(int num){
	if(num==0) {
		return ;
	}
	else{
	printf("%d", num);
	return n_natural(num-1);
	}
	
}

int main(){
	int a;
	scanf("%d", &a);
	n_natural(a);
}