#include <stdio.h>
int main(){
    int N;
    printf("Enter a number N");
    scanf("%d",&N);
    if(N%5==0&&N%11==0){
        printf("BOTH");
    }
    else if(N%5!=0&&N%11!=0){
        printf("NONE");
    }
    else{
        printf("ONE");
    }
    return 0;

}