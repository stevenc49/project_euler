#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const int MAX = 100;

    int sum_of_sq = 0;
    int sq_of_sum = 0;

    for(int i=1; i<=MAX; i++)
    {
        sum_of_sq += pow((double)i,2);
    }

    for(int i=1; i<=MAX; i++)
    {
        sq_of_sum += i;
    }

    sq_of_sum = pow((double)sq_of_sum,2);

    int diff = sq_of_sum - sum_of_sq;

    cout << diff << endl;
}
