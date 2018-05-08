#include <iostream>

using namespace std;

int main()
{
    /*define local variables*/
    string name_var;
    int age_var = 0;
    bool age_correct_flag = false;

    /*start your actual code*/
    cout<< "what's your name?"<<endl;
    cin>> name_var;
    cout<< "so your name is: "<<name_var<<", nice to meet you "<<name_var<<endl;

    while(!age_correct_flag)
    {
        cout<< "and how old are you, "<< name_var<<"?"<<endl;
        cin>> age_var;
        if (cin.fail())
        {
            cout<< "AFAIK, the age is measured in time, which is determined by integers, so please don't try to pull my leg...";
            cin.clear();
            cin.ignore();
            age_correct_flag = false;
        }
        else
        {
            age_correct_flag = true;
        }
    }

    cout<< "congratulations, what a beautiful age "<< age_var<< endl;
    cout<< "I am very young, I have just been created...";
    cout<< "good luck with your projects "<< name_var << ", see you later" << endl;
    return 0;
}
