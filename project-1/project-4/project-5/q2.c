#include <stdio.h>

int main() {
    int rows, columns, i, j;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);

    printf("Enter the array's column size: ");
    scanf("%d", &columns);

    int arr[rows][columns];

    printf("Enter array's elements:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++)
         {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int largest = arr[0][0];
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            if(arr[i][j] > largest) {
                largest = arr[i][j];
            }
        }
    }

    printf("The largest element is: %d\n", largest);

    return 0;
}