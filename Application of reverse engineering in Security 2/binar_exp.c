#include <stdio.h>
#include <stdlib.h>

void secret_function()
{
    printf("You don't have access of me please keep away ");
}


int main(int *argc,char *argv[])
{
    char *buffer = "Name",*name[10];
    printf("Welcome to ax1al \n");
	printf("Enter your name \n");
	scanf("%s",&name);
    strcpy(buffer,name);
	printf("%s",buffer);
	while(1)
	{
		
	}
    return 0;
}
