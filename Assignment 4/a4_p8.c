#include <stdio.h>
#define MAX 30
void print_matrix(int m[MAX][MAX], int n);
void print_under_secondary_diagonal(int m[MAX][MAX], int n);
int main(void)
{
    int m[MAX][MAX];
    int n;
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &m[i][j]);

    print_matrix(m, n);
    print_under_secondary_diagonal(m, n);

    return 0;
}

void print_matrix(int m[MAX][MAX], int n)
{
    printf("The entered matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
}

/* elements below the secondary diagonal: row + column > n - 1 */
void print_under_secondary_diagonal(int m[MAX][MAX], int n)
{
    printf("Under the secondary diagonal:\n");
    for (int i = 0; i < n; i++)
        for (int j = n - i; j < n; j++)
            printf("%d ", m[i][j]);
    printf("\n");
}
