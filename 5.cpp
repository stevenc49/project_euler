#include <iostream>

#define MAX 20

using namespace std;

bool isDivisible(int n)
{
    for(int i=1; i<=MAX; i++)
    {
        if(n%i==0)
            continue;
        else
            return 0;
    }

    return 1;
}

int main()
{
    int n = MAX;

    while(true)
    {
        if( !isDivisible(n) )
            n+=MAX;
        else
        {
            cout<<n<<endl;
            break;
        }
    }

    return 0;
}
