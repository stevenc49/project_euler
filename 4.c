#include <stdio.h>

int isPalin(int n)
{
    char x[7];
    sprintf(x, "%d", n);

    char* front = x;
    char* end = x + strlen(x) - 1;

    while(front < end)
    {
        if(*front != *end)
            return 0;

        front++;
        end--;
    }

    return 1;
}

int main()
{
    int i,j;
    int largest = 0;

    for(i=999; i>=100; i--)
    {
        for(j=999; j>=100; j--)
        {
            int product = i*j;

            if(isPalin(product) && product>largest)
                largest = product;
        }

    }

    printf("%d\n", largest);

    return 0;
}
