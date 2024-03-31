
/*
Lista2
Exercicio 6
Autor: Samuel Rodrigues dos Santos
Data: 28/03/2024
*/
#include <iostream>
using namespace std;

int main(){
    int x = 0, y = 0;
    cout << "Insira os dois numeros:\n";
    cin >> x >> y;
    cout << "x = "<< x << "         y = " << y << endl;
    if ( x % y == 0){
        cout << "O primeiro e multiplo do segundo";
    }
    else {cout << "O primeiro não e multiplo do segundo";}
    return 0;
}
