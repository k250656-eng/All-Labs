#include <stdio.h>

int main(){
	struct emp{
		int ID,salary; char name[50],position[50];
	};
struct emp e[5];
for (int i=0;i<5;i++){
	printf("enter name of employee %d: ",i+1);
	scanf("%s", e[i].name);
	printf("enter ID of employee %d: ",i+1);
	scanf("%d", &e[i].ID);
	printf("enter salary of employee %d: ",i+1);
	scanf("%d", &e[i].salary);
	printf("enter position of employee %d: ",i+1);
	scanf("%s", e[i].position);
}
int a; int max=0; int index=0;
for (int i=0;i<5;i++){ if (e[i].salary>max) 
{max=e[i].salary; index=i;}}
printf("employee %d with ID %d, name %s, position %s has highest salary of %d",index+1,e[index].ID,e[index].name,e[index].position,e[index].salary);


}

	

