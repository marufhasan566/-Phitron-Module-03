#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        printf("%d\n",i);
        if(i>=5){
            break;
        }
    }
    return 0;
}