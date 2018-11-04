#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){

    // ==============================================================
    //                  parametros já atribuidos
    // ==============================================================

    int soma(int x = 10, int y =10); // declarando função

    int result; // variável que receberá o resultado

    result = soma(); // Utilizando a função sem enviar parametros

    cout << "O resultado sem parametros enceridos é : " << result << endl;

    int val1, val2; // valores para receber

    cout << "Digite o primeiro valor da soma >> ";
    cin >> val1; // recebe parametro do usuário
    cout << endl;
    cout << "Digite o segundo valor da soma >> ";
    cin >> val2; // recebe parametro do usuário
    cout << endl;

    result = soma(val1, val2); // utilizando a função enviando parametros

    cout << "O resultado agora com os parametros enviados é : " << result << endl;


    return 0;
}
int soma(int x = 10, int y =10){
    int sum;
    sum = x + y;
    return sum;
}
