#include <stdio.h>
void input_matrix(int rows, int col, int matrix[rows][col])
{
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}
void multiply_matrix(int m, int n, int p, int q, int matrix1[m][n], int matrix2[p][q], int result[m][q])
{
    if (n != p)
    {
        printf("Matrix multiplication is not possible\n");
    }
    else
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                result[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    result[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }
    }
}
void print_matrix(int rows, int col, int matrix[rows][col])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int m, n, p, q;
    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d %d", &p, &q);

    int matrix1[m][n], matrix2[p][q], result[m][q];

    input_matrix(m, n, matrix1);
    input_matrix(p, q, matrix2);

    multiply_matrix(m, n, p, q, matrix1, matrix2, result);
    printf("Resultant Matrix after multiplication:\n");
    print_matrix(m, q, result);

    return 0;
}