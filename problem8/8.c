#include <stdio.h>
#include <stdlib.h>

int main()
{
    //get the long number from file and store in str
    FILE *fp;
    char str[1001];

    if((fp=fopen("8.txt", "r"))==NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
    else
    {
        fgets(str, 1001, fp);
    }

    //the "sliding window" algorithm
    char *base = &str[0];
	int i, largest = 0;
    int product = 1;

    while(base != &str[995])
    {

        for(i=0; i<5; i++)
        {
			product *= base[i]-48;
        }

        if (product > largest)
            largest = product;

        product = 1;
        base++;
    }

    printf("%d", largest);
	system("PAUSE");

    fclose(fp);
    return 0;
}
