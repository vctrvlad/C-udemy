#include <iostream>
#include "cat.h"

using namespace std;

void Cat::jump()
{
    cout<<this<<" mrrrrr"<<endl;
}

void Cat::speak()
{
    if(happy)
    {
         cout<<this<<" meouwwww"<<endl;
    }
    else
    {
        cout<<this<<" ssss"<<endl;
    }
}
