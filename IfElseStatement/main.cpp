#include <iostream>

using namespace std;

int main()
{
    cout<<"1.   Add new record"<<endl;
    cout<<"2.   Delete record"<<endl;
    cout<<"3.   View record"<<endl;
    cout<<"4.\tSearch record"<<endl;
    cout<<"5.\tQuit"<<endl;

    cout<<"insert your choice>" <<flush;
    int choice_var = 0;
    cin>>choice_var;

    if (3>= choice_var)
    {
        cout<<"Insufficient privileges"<<endl;
    }
    else if (5 == choice_var)
    {
        cout <<"The application will now quit"<<endl;
    }
    else
    {
        cout<<"Enter the name of the record to search";
    }

    return 0;
}
