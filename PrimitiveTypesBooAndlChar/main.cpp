#include <iostream>

using namespace std;

int main()
{
    bool bvalue = true;
    char cvalue = 55; //7 ASCII value
    char c2value = '7';
    char c3value = 257;
    cout << "bvalue" << bvalue<<endl;
    cout << "size of bool = "<< sizeof(bool)<<endl;
    cout << "cvalue = " << cvalue << endl;
    cout << "c2value = " << c2value << endl;
    cout << "c3value = " << c3value << endl;
    cout << "size of char = "<< sizeof(char)<<endl;

    return 0;
}
