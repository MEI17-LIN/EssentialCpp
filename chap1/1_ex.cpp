#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

int main(void)
{
    // /*******ex 1.5****string******/
    // cout << "What's your name? ";
    // string name;
    // cin >> name;
    // while(name.length() < 2)
    // {
    //     cout << "at least 2 letters. "
    //     << "Please input again: ";
    //     cin >> name;
    // }
    // cout << "Well, " << name 
    //      << ", nice to see you! " << endl;
    
    // /*******ex 1.5****char[]******/
    // cout << "What's your name? ";
    // char name[10] = "";
    // cin >> name;
    // while(name[1] == '\0')
    // {
    //     cout << "at least 2 letters. "
    //     << "Please input again: ";
    //     cin >> name;
    // }
    // cout << "Well, " << name 
    //      << ", nice to see you! " << endl;
    
    // /*******ex 1.6****array******/
    // cout << "Input a series of int: ";
    // int nums[10] = {0};
    // int val = 0;
    // int i = 0, j = 0;
    // float avg = 0;
    // while(cin >> val && i < 10)
    // {
    //     nums[i] = val;
    //     i++;
    // }
    // for(j = 0; j < i; j++)
    // {
    //     cout << avg << " ";
    //     avg += nums[j];
    // }
    // cout << avg/i;

    // /*******ex 1.6****vector******/
    // cout << "Input a series of int: ";
    // vector<int> vec_int;
    // int val = 0;
    // float avg = 0;
    // while(cin >> val)
    // {
    //     vec_int.push_back(val);
    // }
    // for(int i = 0; i < vec_int.size(); i++)
    // {
    //     avg += vec_int[i];
    //     cout << avg << " ";
    // }
    // cout << avg/vec_int.size();
    
    /*******ex 1.7**********/
    ifstream infile("ex17.txt");
    vector<string> words;
    string val_str;
    if(!infile)
    {
        cerr << "Error!"<< endl;
        return 0;
    }

    while(infile >> val_str)
    {
        words.push_back(val_str);
    }

    cout << "Origin: "<< endl;
    for(int i = 0; i < words.size(); i++)
    {   
        cout << words[i] << " ";
    }

    sort(words.begin(), words.end());

    cout << "Sorted: "<< endl;
    for(int i = 0; i < words.size(); i++)
    {   
        cout << words[i] << " ";
    } 
    ofstream outfile("ex17_sort.txt", ios_base::app);
    
    for(int i = 0; i < words.size(); i++)
    {   
        outfile << words[i] << endl;
    } 

    return 0;
}