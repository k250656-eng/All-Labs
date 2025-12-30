#include <stdio.h>
#include <string.h>
int main(){
	char names[5][20],  search[20], temp[20];
	FILE *fp;
	int found=0;
	
	int i;
	for (i=0;i<5;i++){
	printf("enter employee name %d: ",i+1);
	 scanf("%s", names[i]);
	}
	
	fp=fopen("names.txt","w");
	if (fp==NULL){ printf("error, could not open file"); 
	return 1;
	}
	
	for (i=0;i<5;i++){
		fprintf(fp,"%s\n",names[i]);
	}
	
	fclose(fp);
	
	fp=fopen("names.txt","r");
	if (fp==NULL) {printf("error, could not open file");
	return 1;}
	
	printf("enter the name you want to search: ");
	scanf("%s", search);
	
	while(fscanf(fp, "%s", temp) != EOF){
		if (strcmp(temp,search)==0){found=1; break;}
	}
	
	fclose(fp);
	
	
	
	if (found) {printf("name found in directory");
	}
	else{printf("name not found in directory");
	}
}
