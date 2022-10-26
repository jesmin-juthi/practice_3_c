#include <stdio.h>

int main()

{

    int N, i;
    scanf("%d", &N);
    if(N >= 1)
    {
        for( i = 1; i <= N; i++)
        {
            printf("%d ", i);
        }
    }

    else
    {
        printf("Please enter a positive number");
    }

    return 0;
}