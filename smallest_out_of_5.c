#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter the numbers: ");
    scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);

    if(a<b && a<c && a<d && a<e)
    {
        printf("a is the smallest number out of all");
    }
    else if(b<a && b<c && b<d && b<e)
    {
        printf("b i s the smallest out of all");
    }
    else if(c<a && c<b && c<d && c<e)
    {
        printf("c i s the smallest out of all");
    }
    else if(d<a && d<b && d<c && d<e)
    {
        printf("d i s the smallest out of all");
    }
    else if(e<a && e<b && e<c && e<d)
    {
        printf("e i s the smallest out of all");
    }
    else
    {
        printf("Invalid input");
    }
    return 0;
}