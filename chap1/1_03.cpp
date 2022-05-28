#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    const int seq_size = 18;
    // vector<int> elem_seq(seq_size);
    int elem_vals[seq_size] = {1,2,3,3,4,7,2,5,12,3,6,10,4,9,16,5,12,22};
    vector<int> elem_seq(elem_vals, elem_vals+seq_size);
    for(int i = 0; i < elem_seq.size();i++)
    {
        cout << elem_seq[i] << ((i+1) % 3 ? ' ':'\n');
    }

    return 0;
}