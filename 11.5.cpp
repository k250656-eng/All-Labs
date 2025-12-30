#include <stdio.h>
#include <string.h>

void rev(char str[], int s,int e){
if (s>=e) return;
char temp=str[s];
str[s]=str[e];
str[e]=temp;

rev(str,s+1,e-1); }

int main(){
	char m[]="olleh dlrow";
	int l=strlen(m);
	rev(m,0,l-1);
	printf("%s",m);
}
