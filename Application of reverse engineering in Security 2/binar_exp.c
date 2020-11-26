#include <stdio.h>
#include <stdlib.h>

void secret_function(char *name)
{
	char *buffer = "Name";
    printf("Copying buffer \n");
	strcpy(buffer,name);
	printf("%s",buffer);
	return;
}


int main(int *argc,char *argv[])
{
    char *buffer = "Name",*name[10];
    printf("Welcome to ax1al \n");
	printf("Enter your name \n");
	scanf("%s",&name);
    return 0;
}
