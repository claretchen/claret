#include<stdio.h>
int main(){
	int a;
	for(a=1;a<=9;a++){
		int b;
		for(b=1;b<=a;b++){
			printf("%d*%d=%d  ",a,b,a*b);
		}
		printf("\n");
	}
	return 0;
}