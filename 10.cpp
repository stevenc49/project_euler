#include <iostream>
#include <list>
#include <cmath>

using namespace std;

void initializeList(list<int> &list, int max)
{
    for(int i=2; i<=max; i++)
        list.push_back(i);
}

void removeMultiples(list<int> &lst, int num)
{
    list<int>::iterator itr;

    for(itr = lst.begin(); itr != lst.end(); )
    {
        if ( *itr % num == 0 && *itr != num )
            itr=lst.erase(itr);
        else
            ++itr;
    }
}

int getNextPrime(list<int> &lst, int prime)
{
    list<int>::iterator itr;

    for(itr = lst.begin(); itr != lst.end(); itr++)
    {
        if( *itr > prime )
        {
            return *itr;
        }
    }
}

list<int> sieve(int max)
{
    int prime = 2;

    list<int> lst;

    initializeList(lst, max);

    do
    {
        removeMultiples(lst, prime);
        prime = getNextPrime(lst, prime);
    } while ( pow(float(prime),2)<max );

    return lst;
}

int main()
{
    list<int> primes = sieve(2000000);
    list<int>::iterator itr;
    long long int sum = 0;

    for(itr = primes.begin(); itr != primes.end(); itr++)
    {
        sum += (long long int)*itr;
    }

    cout << sum;

    return 0;
}
