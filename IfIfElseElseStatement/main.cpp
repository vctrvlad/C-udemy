#include<iostream>

using namespace std;

int main()
{
    cout<<"\tMENU"<<endl;
    cout<<"1.Add record"<<endl;
    cout<<"2.Delete record"<<endl;
    cout<<"3.View record"<<endl;
    cout<<"4.Search record"<<endl;
    cout<<"5.Quit"<<endl;

    cout<<"Please enter your option"<<endl;
    int option_variable = 0;
    cin>> option_variable;

    if(3 >= option_variable )
    {

        string your_password_variable, password_variable = "admin";
        cout<<"please provide your password>"<<flush;
        cin>> your_password_variable;
        if (password_variable != your_password_variable)
        {
            cout<<"Access DENIED"<<endl;
        }
        else
        {
            cout<<"Access GRANTED"<<endl;
            switch (option_variable)
            {
            case 1:
                cout<< "the new record was successfully added"<<endl;
                break;
            case 2:
                cout<< "the record was successfully deleted"<<endl;
                break;
            case 3:
                cout<< "displaying the record in progress:"<<endl;
                break;
            default:
                break;
            }
        }
    }
    else if ( 5 == option_variable )
    {
        cout<<"Quiting"<<endl;
    }
    else
    {
        cout<<"please enter the name of the record you want to search>"<<endl;
    }
    return 0;
}
