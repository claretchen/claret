#include<stdio.h>
int main(){
int n,v;
scanf("%d %d",&n,&v);
for(int i=0;i<n;i++){
int a;
scanf("%d",&a);
if (a==1&&v<10){
    v++;
}else if(a==0&&v>0){
    v--;
}
}
printf("%d\n",vinclude);
    return 0 ;
}
