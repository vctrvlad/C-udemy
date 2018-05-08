#include <iostream>
#include "cat.h"
using namespace std;

int main()
{
    Cat Chin;
    Chin.HappyMood(false);
    Chin.speak();
    Chin.jump();

    Cat Keiko;
    Keiko.HappyMood(true);
    Keiko.speak();
    Keiko.jump();
    return 0;
}
