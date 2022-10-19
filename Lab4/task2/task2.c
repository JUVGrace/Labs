#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
    int choice;
    int sum = 0;
    int i,n,m,j;
    int k = 0;
    int array[100][100];
    printf("Input the length \n");
    while (scanf_s("%d", &n) != 1 || n < 1 || n > 100 || getchar() != '\n')
    {
        printf("Wrong input\n");
        rewind(stdin);
    }
    while (scanf_s("%d", &m) != 1 || m < 1 || m > 100 || getchar() != '\n')
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
        printf("Input %d elements\n", n*m);
        for ( i = 0; i < n; i++)
        {
            for ( j = 0; j < m; j++)
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
            for ( j = 0; j < m; j++)
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
            for ( j = 0; j < m; j++)
            {
                array[i][j] = (rand() % 10 - 5);
                printf("%3d", array[i][j]);
            }
            printf("\n");
        }
    }
    
    printf("\n");

    for (i = 0; i < n; i++)
    {
        sum = 0;
        for (j = 0; j < m; j++)
        {
            if (array[i][j] >= 0)
            {
                sum += array[i][j];
                k++;
            }

            
        }
        if (k == m && sum > 0)
            break;
        k = 0;
    }

    if (k == 0)
    {
        printf("No positive row\n");
        return 0;
    }
    
    printf("The sum of the first positive row = %d\n", sum);


    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            array[i][j] -=sum;
            printf("%3d", array[i][j]);
        }
        printf("\n");
    }

    return 0;

}

