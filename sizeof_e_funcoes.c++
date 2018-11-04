#include<iostream>
#include<string>

using namespace std;

//  ==================================================
//                 Parcial a funções
//  ==================================================

// procedimento global, não precisa declarar no main

void teste_ndecl(){
    cout << "Testando procedimento não declarado" << endl;
}

void decl_formain(); // declarando fora do main

int main(){

    //  ======================================================================
    //                          Operador Sizeof()
    //  ======================================================================

    //verifica o tamanho em bytes dedicada a cada variável

    cout << "int : " << sizeof(int) << " Bytes" << endl; // tamanho da memória dedicada ao int
    cout << "char : " << sizeof(char) << " Byte" << endl; // tamanho da memória dedicada ao char
    cout << "float : " << sizeof(float) << " Bytes" << endl; // tamanho da memória ded. ao float
    cout << "double : " << sizeof(double) << " Bytes" << endl; // tamanho da memória ded. ao doub.

    int teste = 1000; // variável para teste de tamanho;
    cout << "O tamanho da variável teste na memória é :>> " << sizeof(teste) << " Bytes" << endl;

    //  ==============================================================================
    //                                      Funções
    //  ==============================================================================

    void printhello(); // declarando o procedimento

    printhello(); // Utilizando o procedimento
    teste_ndecl(); // Utilizando procedimento global
    decl_formain();

    return 0;
}

void printhello(){
    cout << endl;
    cout << "Hello word!! "<< endl;
}

void decl_formain(){
    cout << "Declarando fora do método Main o procedimento após ele." << endl;
}
