#include <stdio.h>

int main()
{
   
    int c;
    scanf("%d",&c);
    printf("%d %d\n" ,c , &c);
    c = 10;
     printf("%d %d" ,c , &c);
}
