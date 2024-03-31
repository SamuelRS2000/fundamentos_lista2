/*
Lista2
Exercicio 9
Autor: Samuel Rodrigues dos Santos
Data: 28/03/2024
*/
#include <iostream>
using namespace std;

int main(){

    int dist = 0,resto = 0, valor =0;
    float total;

    cout << "Distancia pecorrida em Km:\n";
    cin >> dist;

    total = dist/150 * 1.50;  //Contabilizano 150 km
    resto = dist%150;         //Atualizando a distancia restante

    total += resto/100 * 1.65;//Contabilizano 100 km
    resto %= 100;

    total += resto/50 * 1.75;//Contabilizano 50 km
    resto %= 50;

    if(resto != 0){
        total += 1.75;       //Distancias menores que 50 km, são contabilizadas com 50 km a mais.
    }
    cout << "O valor a se pagar e R$ " << total << endl;
    cout << "Custo medio por Km e R$" << total/dist << endl;

    return 0;
}
