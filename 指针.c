#include<stdio.h> 
	int FindMin(int arr[],int size){
	int min=arr[0];
	int i;
	for(i=1;i<size;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	return min;
}
int main(){
	int score[4]={19,30,2,5};
	int minScore=FindMin(score,4);
	printf("×îµÍ·ÖÊÇ%d\n",minScore);
	return 0;
}
