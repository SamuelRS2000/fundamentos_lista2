
/*
Lista2
Exercicio 8
Autor: Samuel Rodrigues dos Santos
Data: 28/03/2024
*/
#include <iostream>
#include <cmath>     // Preciso realizar a raiz quadrada ao final, usarei a sqrt presente na cmath
using namespace std;

int main(){

    int CA = 0,CO=0;
    cout << "Cateto Adjacente:\n";
    cin >> CA;
    cout << "Cateto Oposto:\n";
    cin >> CO;
    cout << "Hipotenusa = " << sqrt(CA*CA + CO*CO) << endl ;
    return 0;
}
