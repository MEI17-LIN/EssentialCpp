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
    ofstream outfile("seq_data.txt",ios_base::app);
    if(!outfile)
    {
        cerr << "Error!" << endl;
    }
    else
    {
        cout << "Please input user name: ";
        cin >> usr_name;
        cout << "Please input num_tries and num_right: ";
        cin >> num_tries >> num_right;

        cout << "Save file !" << endl;
        outfile << usr_name << " "
                << num_tries << " "
                << num_right << endl;
    }
    
    return 0;
}
