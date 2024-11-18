#include <stdio.h>

int main()
 {
    int rows, columns, i, j, row_num, col_num, row_sum = 0, col_sum = 0;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);

    printf("Enter the array's column size: ");
    scanf("%d", &columns);

    int arr[rows][columns];

    printf("Enter array's elements:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter row number: ");
    scanf("%d", &row_num);

    printf("Elements of row %d: ", row_num);
    for(j = 0; j < columns; j++) {
        printf("%d ", arr[row_num][j]);
        row_sum += arr[row_num][j];
    }
    printf("\nThe sum of row %d: %d\n", row_num, row_sum);

    printf("Enter column number: ");
    scanf("%d", &col_num);

    printf("Elements of column %d: ", col_num);
    for(i = 0; i < rows; i++) {
        printf("%d ", arr[i][col_num]);
        col_sum += arr[i][col_num];
    }
    printf("\nThe sum of column %d: %d\n", col_num, col_sum);

    return 0;
}