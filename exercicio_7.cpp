
/*
Lista2
Exercicio 7
Autor: Samuel Rodrigues dos Santos
Data: 28/03/2024
*/
#include <iostream>
using namespace std;

int main(){
/*
    Embora não tenha sido abordado na aula, não sei se existe uma
  solução que consiga testar se QUALQUER intero e primo sem usar Loop.
*/
    int num = 0,flag=0;
    cout << "Insira o numero:\n";
    cin >> num;

    for(int i=2;i<num;i++){
        if (num % i == 0){
            flag = 1;
            }
    }

    if(flag == 1){
        cout << "Não é primo";
     }
    else {
        cout << "É primo";
    }

    return 0;
}
