#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float f_value = 1.1;

    //incorrect way
    cout<<"INCORRECT WAY"<<endl;
    if (1.1 == f_value)
    {
        cout<<"the variable f_value = "<< 1.1 <<endl;
    }
    else
    {
        cout<<"the variable f_value = "<< fixed<<setprecision(10)<< f_value <<"which is not equal to" << 1.1 <<endl;
    }

    //one of the correct ways:
    cout<< "ONE OF CORRECT WAYS"<<endl;
        if (1.11 >= f_value)
    {
        cout<<"the variable f_value = "<< 1.1 <<endl;
    }
    else
    {
        cout<<"the variable f_value = "<< fixed<<setprecision(10)<< f_value <<"which is not equal to" << 1.1 <<endl;
    }

    return 0;
}
