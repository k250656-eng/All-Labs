#include <stdio.h> 
#include <string.h> 
int main(){
char cw[50];
char fw[50];
printf("enter full statement: "); 
fgets(fw,sizeof(fw), stdin);

int len=strlen(fw)-1;
printf("enter the word to add: "); 

fgets(cw,sizeof(cw), stdin);

printf("\ncombined final statement is %s", strcat(fw,cw)); 
printf("initial number of characters is %d", len);
}

