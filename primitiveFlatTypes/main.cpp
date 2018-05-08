#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
float floating_variable = 5.6037638976085060937360938607647685864636477356643364774563;
double more_precise_float_var = 5.6037638976085060937360938607647685864636477356643364774563;
long double even_more_precise_var = 5.6037638976085060937360938607647685864636477356643364774563;

cout<< "primitive floating point types"<<endl;
cout<< setprecision(256)<<fixed<< floating_variable<< endl;
cout<< "size of float = "<< sizeof(float)<<endl;
cout<< setprecision(256)<<fixed<<more_precise_float_var<<endl;
cout<< "size of double = "<< sizeof(double)<<endl;
cout<< setprecision(256)<<fixed<<even_more_precise_var<<endl;
cout<< "size of long double = "<< sizeof(long double)<<endl;


return 0;
}
