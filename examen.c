#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int l,n,m;
    l=12;
    n=30;
    m=2;
    srand(time(NULL));
    int matrix[l][n][m];
    for (int k = 0; k < l; k++)
    {
        for (int i = 0; i < n; i++)
        {
            
            for (int j = 0; j < m; j++)
            {
                matrix[k][i][j]=rand()%101;
            }
            
        }
        
    }
    mostrar (l,n,m,matrix);
    return 0;
}
void mostrar (int l, int n, int m,int matriz[l][n][m])
{
    for (int k = 0; k < l; k++)
    {
        printf("Mes %d \n", k+1);
        printf("Ingresos \t Egresos\n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                printf("%d \t \t", matriz[k][i][j]);
            }
            printf("\n");
        }
    }
}
