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

    // ==============================================================
    //                       Função recursivas
    // ==============================================================

    int fatorial(int n); // declarando a função

    int n; // criando a variável
    cout << "Digite um número para ver o fatorial >> "; // pedindo ao usuário valor
    cin >> n; // recebendo valor
    cout << endl; // pulando linha

    result = fatorial(n);  // chamando a função recursiva

    cout << "O fatorial de [ " << n << " ] = " << result; // imprimindo o resultado

    // =============================================================
    //                      passando arrays
    // =============================================================

    void pass_array(int array[]);

    int array[3] = {1, 2, 3};

    pass_array(array);

    // ============================================================
    //              passando valores referenciados
    // ============================================================

    void refer(int *ref);

    cout << endl;
    int valor_ref = 20;
    cout << "valor inicial do ref : " << valor_ref << endl;
    refer(&valor_ref);
    cout << "O valor apos referência a função é >> " << valor_ref << endl;

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
int fatorial(int n){
    if(n == 1){
        return 1;   // condição se caso n = 1 retorna apenas 1
    }
    else{
        return n * fatorial(n-1);  // efetua a operação
    }
}
void pass_array(int array[]){
    cout << endl;
    cout << "O valor do vetor é .." << endl;
    for(int i=0; i < 3; ++i){
        cout << array[i] << endl;
    }
}
void refer(int *ref){
    for(int i=0; i < 50; ++i){
        *ref += i + 15;
    }
}
