#include <stdio.h>

int main()
{
    int n, i, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("Neither Prime Nor Composite");
    }
    else
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("Given Number is Prime\n");
        else
            printf("Given Number is Composite\n");
    }

    return 0;
}