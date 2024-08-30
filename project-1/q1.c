#include<stdio.h>

int main()
{
   int Basesalary, HRA, DA, TA, fs;

   printf("enter your salary:-");
   scanf("%d", &Basesalary);

   HRA = Basesalary * 10 /100;
   DA = Basesalary * 5 /100;
   TA = Basesalary * 8 /100;

   fs = Basesalary + HRA + DA + TA;

   printf("Gross salary:%d" , fs);
}