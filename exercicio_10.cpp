
/*
Lista2
Exercicio 10
Autor: Samuel Rodrigues dos Santos
Data: 28/03/2024
*/

#include <iostream>

using namespace std;

int main(){
    char mensagem[6],vogal[6],cript[6]; //5 caracteres mais o caracter nulo padrão
    int cont_vogal=0;
    cout << "Digite a string \n";
    cin >> mensagem ;

    //Comparando com as vogais
    for(int i=0;i < 6;i++){

        vogal[i]   = ' ';        // Limpando a string das vogais

        int caracter = tolower(mensagem[i]); // tolower converte o caracter para minusculo e retorna este caracter
        cript[i] = caracter;   // Incializando a string criptografada com a mensagem

        // Testando se e vogal
        if(caracter == 'a' ){
            vogal[i] = caracter;
            cript[i] = 'i';
            cont_vogal++;
        }
        if(caracter == 'e'){
            vogal[i] = caracter;
            cript[i] = 'o';
            cont_vogal++;
        }
        if(caracter == 'i' ){
            vogal[i] = caracter;
            cript[i] = 'u';
            cont_vogal++;
        }
        if(caracter == 'o' ){
            vogal[i] = caracter;
            cont_vogal++;
        }
        if(caracter == 'u'){
            vogal[i] = caracter;
            cont_vogal++;
        }
    }

    cript[6] = '\0';                // Definindo o caractere nulo no final da string cript
    vogal[5] = '\0';                // Definindo o caractere nulo no final da string vogal

    cout << "A string e :          "<< mensagem << endl;
    cout << "Contem " << cont_vogal<< " vogais" << endl;
    cout << "Sendo respectivamente:" << vogal << endl;
    cout << "String  criptografada:" << cript << endl;
    return 0;
}
