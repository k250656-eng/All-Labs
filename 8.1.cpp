#include <stdio.h> int main(){
int a[3][3];
int c=0;
for (int i=0;i<3;i++) {
for (int j=0;j<3;j++){
printf("enter value for %d row, %d column for matrice: ", i+1 ¸j+1); scanf("%d", &a[i][j]);}}
for (int i=0;i<3;i++) { for (int j=0;j<3;j++){
if (a[i][j]!=a[j][i]) { c=1;
}}
}
if (c==1){
}
printf("not symmetric");
else{
printf("symmetric");}}
