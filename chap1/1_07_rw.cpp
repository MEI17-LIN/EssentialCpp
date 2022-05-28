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
    char add_info = 'N';
    fstream iofile("seq_data.txt",ios_base::in|ios_base::app);
    if(!iofile)
    {
        cerr << "Error!" << endl;
    }
    else
    {

        iofile.seekg(0, ios::beg);   
        while(iofile >> usr_name)
        {
            iofile >> num_tries >> num_right;
            cout << "*****************"<< endl;
            cout << "user name: " << usr_name << endl
                 << "num_tries: " << num_tries << endl
                 << "num_right: " << num_right << endl;
            cout << "*****************"<< endl;
        }

        cout << "Enter new info? Y/N ";
        cin >> add_info;
        iofile.seekp(0, ios::end);
        if(add_info == 'Y' || add_info == 'y')
        {
            cout << "Please input user name: ";
            cin >> usr_name;
            cout << "Please input num_tries and num_right: ";
            cin >> num_tries >> num_right;

            cout << "Save iofile !" << endl;
            iofile.clear(); //*******************************************清除流的状态?
            iofile << usr_name << " "
                    << num_tries << " "
                    << num_right << endl;
        }
    }
    return 0;
}
