#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <fstream>  
using namespace std;


int main(void)
{
    string usr_name("");
    int num_tries(0);
    int num_right(0);
    ifstream infile("seq_data.txt");
    if(!infile)
    {
        cerr << "Error!" << endl;
    }
    else
    {
        while(infile >> usr_name)
        {
            infile >> num_tries >> num_right;
            cout << "*****************"<< endl;
            cout << "user name: " << usr_name << endl
                 << "num_tries: " << num_tries << endl
                 << "num_right: " << num_right << endl;
            cout << "*****************"<< endl;
        }
    }
    
    return 0;
}
