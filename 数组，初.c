#include<stdio.h> 

int main()
{
	int nums[5];
	int i;
	
	for(i=0;i<5;i++){
		printf("请输入第%d个数字；",i+1);
		scanf("%d",&nums[i]) ;
     }
		printf("倒序输出：");
		for(i=4;i>=0;i--) {
			printf("%d",nums[i]);
}
		printf("\n") ;
		
	return 0;	 
}
