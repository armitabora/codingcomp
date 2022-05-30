#include <stdio.h>
int main(){
    int dice;

    printf("Enter number on dice:");
    scanf("%d",&dice);
    if (dice==1)
    {
        printf(6);
    }
    else if(dice==6)
    {
        printf(1);
    }
    else if(dice==2)
    {
        printf(5);
    }
    else if(dice==5)
    {
        printf(2);
    }
    else if(dice==3)
    {
        printf(4);
    }
    else if(dice==4)
    {
        printf(3);
    }
    return 0;
}
