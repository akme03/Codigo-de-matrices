#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int i, j, k, m, p, n;
int matriz1[100][100], matriz2[100][100], matriz3[100][100];
int x, y, a, b;
int main()
{
	do
	{

		printf("Ingrese numero de filas de la matriz#1:");
		scanf("%i", &x);
		printf("Ingrese numero de columnas de la matriz#1:");
		scanf("%i", &y);
		printf("Ingrese numero de filas de la matriz#2:");
		scanf("%i", &a);
		printf("Ingrese numero de columnas de la matriz#2:");
		scanf("%i", &b);
		if (y != a)
		{
			printf("Error! Intente de nuevo \n");
		}
		else
		{
			for (i = 0; i < x; i++)
			{
				for (j = 0; j < y; j++)
				{
					printf("Ingrese el valor de la Matriz#1[%i][%i]\n", i + 1, j + 1);
					scanf("%f", &matriz1[i][j]);
				}
			}

			for (i = 0; i < a; i++)
			{
				for (j = 0; j < b; j++)
				{
					printf("Ingrese el valor de la Matriz#2[%i][%i]\n", i + 1, j + 1);
					scanf("%f", &matriz2[i][j]);
				}
			}
		}
	} while (y != a);
	for (i = 0; i < m; i++)//De donde sale m?
	{
		for (k = 0; k < p; k++)//De donde sale p?
		{
			matriz3[i][k] = 0;
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < p; k++)
			{
				matriz3[i][k] = matriz3[i][k] + matriz1[i][j] * matriz2[j][k];
			}
		}
	}

	for (i = 0; i < x; i++)
	{
		for (j = 0; j < b; j++)
		{
			printf("lugar %d\n ", matriz3[i][j]);
		}
	}

	return 0;
}
