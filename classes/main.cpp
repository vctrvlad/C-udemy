#include <iostream>
#include "cat.h"
using namespace std;

int main()
{
    Cat Chin;
    Chin.happy = 0;
    Chin.speak();
    Chin.jump();

    Cat Keiko;
    Keiko.happy = 1;
    Keiko.speak();
    Keiko.jump();
    return 0;
}
