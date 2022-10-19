#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
    int i, j, t, k, o, p;
    int choice;
    int n;
    int array[100][100];
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


    int sum_str=0;
    int sum_stb=0;
    int diag1=0;
    int diag2=0;
    int comp = 0;

    for (i = 0, j = 0; j < n; j++)
    {
        comp += array[i][j];
    }



    for ( i = 0; i < n; i++)
    {
        sum_str = 0;
        for ( j = 0; j < n; j++)
        {
            sum_str += array[i][j];
        }
        if (sum_str != comp)
        {
            printf("Its not a Magic square");
            return 0;
        }
    }
    

    for ( j = 0; j < n; j++)
    {
        sum_stb = 0;
        for ( t = 0; t < n; t++)
        {
            sum_stb += array[t][j];
        }
        if (sum_stb != comp)
        {
            printf("Its not a Magic square");
            return 0;
        }
    }


    for (k = 0, j = 0; k < n; k++, j++)
    {
        diag1 += array[k][j];
    }
    
    if (diag1 != comp)
    {
        printf("Its not a Magic square");
        return 0;
    }

    for ( o = 0, p = n - 1; o < n; o++, p--)
    {
        diag2 += array[o][p];
    }
    
    if (diag2 != comp)
    {
        printf("Its not a Magic square");
        return 0;
    }

    printf("sum_str=%d\n", sum_str);
    printf("sum_stb=%d\n", sum_stb);
    printf("diag1=%d\n", diag1);
    printf("diag2=%d\n", diag2);

    int mag = comp;

    if ((sum_str == mag) && (sum_stb == mag) && (diag1 == mag) && (diag2 == mag))
    {
        printf("Its Magic square");
    }
    else
    {
        printf("Its not a Magic square");
    }

    return 0;

}
