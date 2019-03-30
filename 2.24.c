#include <stdio.h>
int main(void)
{
    int r;
    printf("enter first number\n");
    scanf("%d", &r );
    if (r==0)
    {
        printf("%d is ZERO",r);
    }
    if (r%2==-1){
        printf("%d is negative odd\n",r);
    }
    else if (r%2==1){
        printf("%d is positive odd\n",r);
    }
    if(r%2==0 && r<0)  {
        printf("%d is negative even\n",r);
    }
    else if(r%2==0 && r>0)  {
        printf("%d is positive even\n",r);
    }
    return 0;}
