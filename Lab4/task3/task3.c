#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int sum = 0;
	int array[100][100];
	int n,i,j;
    int choice;
    printf("Input the length \n");
    while (scanf_s("%d", &n) != 1 || n < 1 || n > 100 || getchar() != '\n')
    {
        printf("Wrong input\n");
        rewind(stdin);
    }

    printf("Enter 1 if you want keyboard input or 2 if you want random input\n");
    while (scanf_s("%d", &choice) != 1 || (choice != 1 && choice != 2) || getchar() != '\n')
    {
        printf("Wrong input\n");
        rewind(stdin);
    }
    
    if (choice == 1)
    {
        printf("Input %d elements\n", n*n);
        for ( i = 0; i < n; i++)
        {
            for ( j = 0; j < n; j++)
            {

                while (scanf_s("%d", &array[i][j]) != 1)
                {
                    printf("Wrong input\n");
                    rewind(stdin);
                }
            }
        }
        for ( i = 0; i < n; i++)
        {
            for ( j = 0; j < n; j++)
            {
                printf("%3d", array[i][j]);
            }
            printf("\n");
        }
    }

    else if (choice == 2)
    {
        srand(time(NULL));
        for ( i = 0; i < n; i++)
        {
            for ( j = 0; j < n; j++)
            {
            
               array[i][j] = (rand() % 10 - 5);
               printf("%3d", array[i][j]);
             
            }
            printf("\n");
        }
    }
    printf("\n");

	for ( i = 0; i <= n / 2; i++)
	{
		for ( j = i; j <= n - i - 1; j++)
		{
			printf("%4d ", array[i][j]);
            sum += array[i][j];
		}
		printf("\n");
	}
    printf("\n");
    
    printf("Sum in area 1=%d ", sum);

	return 0;
}
