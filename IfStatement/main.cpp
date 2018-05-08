#include <iostream>

using namespace std;

int main()
{
    string password = "hello";
    cout<< "please enter your password >"<<endl;
    string your_password;
    cin >>your_password;

    if ( password == your_password)
    {
        cout<< "ACCESS GRANTED"<<endl;
    }

    if (password != your_password)
    {
        cout<< "ACCESS DENIED"<<endl;
    }

    return 0;
}
