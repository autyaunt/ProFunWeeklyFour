#include<stdio.h>
int pattern(int n,int x,int y){
    if (x<=n){
            if (y<=x)
            {
                printf("*");
                pattern(n,x,y+1);                
            }
            else{
                y=1;
                printf("\n");
                pattern(n,x+1,y);  
            }
    }
    return 0;                
}
int main()
{
    int n;
    int x=1;
    int y=1;
    scanf("%d",&n);
    pattern(n,x,y);
    return 0;
}
