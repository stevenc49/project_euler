#include <iostream>
#include <ext/hash_map>

using namespace std;
using namespace __gnu_cxx;

int main()
{
    int longest_num = 0;
    int longest_seq_length = 0;

    hash_map<int, int> map;

    for(int i=1; i<1000000; i++)
    {
        unsigned long long current_num = i; //unsigned long long or else current_num will overflow
        int current_num_seq_length = 1;

        while(current_num != 1)
        {
            if( map[current_num] != 0 )
            {
                current_num_seq_length += map[current_num]-1;
                break;
            }
            else if(current_num%2==0)
                current_num >>= 1;
            else
                current_num = 3*current_num + 1;

            current_num_seq_length++;
        }

        map[i] = current_num_seq_length;

        if(current_num_seq_length > longest_seq_length)
        {
            longest_seq_length = current_num_seq_length;
            longest_num = i;
        }
    }

    cout << "longest number: " << longest_num << endl;
    cout << "longest sequence: " << longest_seq_length << endl;

    return 0;
}
