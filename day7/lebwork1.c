#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("Enter the value of a:-");
    scanf("%d", &a);
    printf("Enter the value of b:-");
    scanf("%d", &b);
    printf("Enter the value of c:-");
    scanf("%d", &c);
    printf("Enter the value of d:-");
    scanf("%d", &d);
    if (a>=b)
    {
        if(a>=c)
        {
            if(a>=d)
            {
                printf("a is max");
            }
            else
            {
                printf("d is max");
            }
        }
        else
        {
            if(c>=d)
            {
                printf("c is max");
            }
            else
            {
                printf("d is max");
            }
        }
    }
    else
    {
        if(b>=d)
        {
            if(b>=d)
            {
                printf("b is max");
            }
            else
            {
                printf("d is max");
            }
        }
        else
        {
            if(c>=d)
            {
                printf("c is max");
            }
            else
            {
                printf("d is max");
            }
        }
    }   
    
}
