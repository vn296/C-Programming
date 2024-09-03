#include<stdio.h>
void main()
{
    char ch='A';
    do{
        printf("%c",ch);
        ch = ch+4;
    
    }while(ch < 'Z');

}