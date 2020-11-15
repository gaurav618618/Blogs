#include <stdio.h>
#include <stdlib.h>

void onSuccessful()
{
    printf("You can now access me Thank you for purchasing my license!");
    return;
}
void onFail()
{
    printf("Wrong product key!");
    return;
}


int main()
{
    int pdKey;
    printf("Welcome to patch!");


    while(1)
    {
        printf("\n");
        printf("You need to enter a right product key to access me!");
        printf("\n");
        scanf("%d",&pdKey);

        if(pdKey == 534728)
        {
            onSuccessful();
        }
        else
        {
            onFail();
        }
    }
    return 0;
}
