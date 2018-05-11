#include <iostream>
using namespace std;

#include "Cat.h"

void Cat::jump()
{
    cout<<"swoup, the cat jumped"<<endl;
}

void Cat::speak()
{
    if(HAPPY < mood)
    {
        purr();
    }
    else if(CONCERNED >= mood)
    {
        cout<<"sssssss"<<endl;
    }
    else
    {
        cout<<"meouwwww"<<endl;
    }

}

void Cat::purr()
{
    cout<<"purrr"<<endl;
}

void Cat::petCat()
{
   mood = (mood_enum_t)1;//this has to be incremented at operator overloading
}

Cat::Cat()
{
    cout<<"Cat created"<<endl;
    mood = (mood_enum_t)0;
}

Cat::~Cat()
{
    cout<<"cat turned off"<<endl;
}
