#include<iostream>
#include<string>

using namespace std;

int main(){

    //  ====================================================
    //                Parametros de funções
    //  ====================================================
    int x = 6; // Futuro parametro

    void rec_param(int b); // declarando o procedimento

    rec_param(x); // utilizando o procedimento enviando o parametro ou argumento

    rec_param(30); // enviando valor ao enves de variáveis

    // ===========================================================
    //                          Return
    // ===========================================================

    int oper_sub(int x, int y);// declarando a função
    int val1, val2; // valores que passaram pela funcao

    cout << "Digite o minuendo : ";
    cin >> val1; // encerindo valores para a variável val1

    cout << "Digite o subtraendo : ";
    cin >> val2; // encerindo valores para a vairiável val2
    cout << endl;

    int result = oper_sub(val1,val2); // retornando a função e o armazenando no resul

    cout << "O resultado da subtração é : " << result << endl; // emprimindo o resultado

    return 0;
}
void rec_param(int b){
    int d = 4, soma;
    soma = d + b;
    cout << "O resultado da operação soma é : " << soma << endl;
}
int oper_sub(int x, int y){
    int subtracao;
    subtracao = x - y;

    return subtracao;
}
