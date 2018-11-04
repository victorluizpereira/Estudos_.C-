#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){

    //  =================================================================
    //                         função rand()
    //  =================================================================

    for(int i = 0; i < 20; ++i){
        cout << rand() << endl; // rand() retorna valores aleatórios
    }

    for(int i=0; i < 10; ++i){
        cout << (rand()%5) << endl; // retorna valores aleatórios de 0 a 5
        cout << 1 + (rand()%5) << endl; // retorna valores aleatórios de 1 a 5
    }

    //  ====================================================================
    //                               srand()
    //  ====================================================================

    srand(50); // levantando parametro para o algoritmo rand()

    cout << "Utilizando srand()" << endl;

    for(int i=0; i < 10; ++i){
        cout << 1 + (rand() % 50) << endl; // gerando verdadiros numeros aleatórios
    }

    // ==================================================================
    //                     usando o time para rand
    // ==================================================================

    cout << endl;
    cout << "Utilizando o srand() em função do tempo" << endl;

    srand(time(0));//recebendo o segundo atual para ajudar no rand

    for(int i=0; i < 10; ++i){
        cout << 1 +(rand()% 50) << endl;
    }


    return 0;
}
