#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        if (i%2==0){
            printf("%d is even\n",i);
        }
        else{
            printf("%d is odd\n",i);  
        } 
    }
    return 0;
}