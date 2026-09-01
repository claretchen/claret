#include<stdio.h> 
#include<stdlib.h> 
int main(){
	int n=5;
	int*arr=(int*)malloc(n*sizeof(int));
	if (arr==NULL){
		printf("ÄÚ´æ·ÖÅäÊ§°Ü/n");
		return 1;
	}
	int i=0;
	for(i;i<n;i++){
		arr[i]=(i+1)*10;
	}
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	free(arr);
	return 0;
}
