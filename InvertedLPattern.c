#include<stdio.h>
#include<stdlib.h>
int main(){
  int N;
  scanf("%d",&N);
  for(int i=1;i<=N;i+=2){
    printf("%d ",i);
  }
  printf("\n");
  for(int j=2;j<N;j+=2){
    printf("%d ",j);
    printf("\n");
  }
}
