#include<stdio.h>

void add(float a, float b) { printf("Result: %.2f\n", a + b); }
void subtract(float a, float b) { printf("Result: %.2f\n", a-b); }
void multiply(float a, float b) { printf("Result: %.2f\n", a*b); }
void divide(float a, float b){
    if (b !=0)
        printf("Result: %.2f\n", a / b);
    else
        printf("Error: Division by zero\n");
}
void mod(float a,float b){
    if (b !=0)
        printf("Result: %.0f\n", (int)a % (int)b);
    else
        printf("Error: Division by zero\n");
}
int main(){
    float num1,num2;
    int choice;
    char exit_choice;

    do{
        printf("\npress 1 for +\npress 2 for -\npress 3 for *\npress 4 for /\npress 5 for %%\npress 0 to exit\n");
        printf("enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0){
            break;
        }

        printf("enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        switch(choice){
            case 1: add(num1, num2); break;
            case 2: subtract(num1, num2); break;
            case 3: multiply(num1, num2); break;
            case 4: divide(num1, num2); break;
            case 5: mod(num1, num2); break;
            default: printf("Invalid choice!\n");
        }

      }while(choice!=0);

      return 0;
    }


