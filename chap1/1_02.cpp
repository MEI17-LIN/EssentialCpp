#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    string usr_name = "";
    int num_tries = 0;
    int num_right = 0;
    double usr_score = 0.0;
    bool usr_more = false;
    bool next_seq = true; // 是否猜下一个seq
    bool go_for_it = true; // 用户想再猜一次
    bool got_it = false; // 用户是否猜对
    char usr_rsp = 'Y';
    int next_elem  = 0;
    int now_tries = 0;
    const int max_tries = 3;
    string sequence_name = "Fibonacci";
    const int seq_size = 18;
    // vector<int> elem_seq(seq_size);
    int elem_vals[seq_size] = {1,2,3,3,4,7,2,5,12,3,6,10,4,9,16,5,12,22};
    vector<int> elem_seq(elem_vals, elem_vals+seq_size);
    int cur_tuple = 0;

    
    cout << "Welcome to " << sequence_name << "test!" << "Please input your name: ";
    cin >> usr_name;
    cout << "Well, "<< usr_name << ". Let's start!" << endl;
    
    while(next_seq == true && cur_tuple < seq_size)
    {
        // 为用户显示数列
        cout << "The first two elements of the sequence are " 
             << elem_vals[cur_tuple] << ",  "
             << elem_vals[cur_tuple+1] 
             << "\nWhat is the next element? ";
        next_elem = elem_vals[cur_tuple+2];
        while((got_it == false) && (go_for_it == true) && (now_tries++ < max_tries))
        {
            int usr_guess;
            cin >> usr_guess;
            num_tries++;
            if(usr_guess == next_elem) // 猜对了
            {
                cout << "Correct!" << endl;
                got_it = true;
                num_right++;
            }
            else
            {
                //猜错了
                switch(now_tries)
                {
                    case 1:
                        cout << "1 try" << endl;
                        break;
                    case 2:
                        cout << "2 try" << endl;
                        break;
                    case 3:
                        cout << "3 try" << endl;
                        break;
                    
                }
                //告诉用户答案错误
                //询问是否想再尝试一次
                cout << "Guess again? Y/N ";
                cin >> usr_rsp;
                if(usr_rsp == 'N' || usr_rsp == 'n')
                    go_for_it = false;
                else
                    go_for_it = true;
            }
        }
        cout << "Try another sequence? Y/N ";
        char try_again;
        cin >> try_again;
        if (try_again == 'N' || try_again == 'n')
            next_seq = false;
        cur_tuple += 3;      
        now_tries = 0;  
        go_for_it =  true;
        got_it = false;
    }

    cout << "It's done~ See you next time!" << endl;


    
    return 0;
}
