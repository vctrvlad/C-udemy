#include <iostream>

using namespace std;

int main()
{
    int numar_pisici = 2;
    int numar_caini = 1;
    int numar_canguri = 0;
    int numar_animale = numar_caini+numar_canguri+numar_pisici;
    cout<< "lectie despre variabile:" <<endl;
    cout<< "numarul de pisici este: "<< numar_pisici<< endl;
    cout<< "numarul de caini este: " << numar_caini<< endl;
    cout<< "numarul de animale este: "<< numar_animale<< endl;
    cout<< "introduceti numarul de canguri de la tastatura" << endl;
    cin>> numar_canguri;
    cout<< "numarul de canguri este: "<< numar_canguri<< endl;
    cout<< "noul numar de animale este: "<< numar_animale<<endl;

    return 0;
}
