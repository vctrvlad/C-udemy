#include <iostream>

using namespace std;

int main()
{
    string password_var = "hello", my_password_var;
    do{
        cout<<"type in your password>"<<endl;
        cin>> my_password_var;
        if (password_var==my_password_var)
        continue;
        cout<< "Access Denied" << endl;
    }while(password_var!=my_password_var);

    cout<<"Access Granted"<<endl;
}
