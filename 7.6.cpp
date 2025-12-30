#include <stdio.h>
int main (){
  int a[5];
  int b[5];
  int i;
  for (i=0;i<5;i++){
    printf("enter number %d: ",i+1);
    scanf("%d",&a[i]);
  }
  printf("original\t modified");
  for (i=0;i<5;i++){
      b[i]=(a[i]+10-5)*2;
    printf("\n%d\t\t %d", a[i],b[i]);}
  
}

