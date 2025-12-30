#include <stdio.h> 
int main(){ int 1, count, i;
char C;
char w[100]={};
printf("enter string: "); scanf("%s",&w);
printf("\nwhich character do you want to find: "); scanf("%c", &c);
l=sizeof(w);
for (i=0; i<l; i++) {
if (w[i]==c){
}
count++; }
if (count==0){
printf("desired character not found");}
else{
printf("desired character occurs %d times", count);}
}
