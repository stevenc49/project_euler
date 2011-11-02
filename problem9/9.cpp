#include <iostream>
#include <cmath>

using namespace std;

bool satisfyEqn1(int a, int b, int c)
{
    return pow((double)a,2) + pow((double)b,2) == pow((double)c,2);
}

bool satisfyEqn2(int a, int b, int c)
{
    return a+b+c==1000;
}

int main()
{
    int a, b, c = 1;

    for(int a=1; a<=1000; a++)
    {
        for(int b=1; b<=1000; b++)
        {
            for(int c=1; c<=1000; c++)
            {
                if( satisfyEqn1(a,b,c) && satisfyEqn2(a,b,c))
                {
                    cout<<a*b*c<<endl;
                    break;
                }
            }
        }
    }

    return 0;
}
