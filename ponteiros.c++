#include<iostream>
#include<string>

using namespace std;

int main(){
    // =========================================================================
    //                          Conceitos de ponteiros
    // =========================================================================

    int local = 5;
    cout << &local << endl; // & mostra o local em que a variável foi armazenada

    int *in; // Declarando um ponteiro do tipo int
    float *flo; // Declarando um ponteiro do tipo flo
    char *ch; // Ponteiro do tipo de ch
    string *str; // Ponteiro do tipo de str

    in = &local; // Armazenando local em um ponteiro do tipo int

    cout << in << endl; // Mostrar o local da variável

    cout << *in << endl; // Mostrar o valor da variável do ponteiro

    // =========================================================================
    //                         Operações com ponteiros
    // =========================================================================

    local += 4;

    cout << local << " Está na memória  " << in << endl; // mostra a variável e seu local

    local = *in + 4; // *in agora possui o valor 9

    cout << local << endl; // efetua a operação normalmente sem que seja um local

    *in += 4; // efetuando já sendo um local

    cout << "O valor da variavel local utilizando ponteiro é " << *in
         << " , o seu local é : " << in << endl;

    cout << local << endl; // variável local recebe os valores equivalentes

    // ==========================================================================
    //                          Memória Dinámica
    // ==========================================================================

    int *p = new int; // retornando o valor dinámco do heap
    *p = 10;

    cout << *p << endl; // Utilizando o valor

    delete p; // Removendo da memória do heap, porém prevalece até o fim da execução do programa

    p = new int; // reutilizando o novo endereço.

    int *s = NULL; // ponteiro s recebe nada na memória
    s = new int[20]; // requisita a memória para um array com peso 20

    // usando o array
    for(int i=0; i < 20; ++i){
        cout << "Digite um valor para o array s [" << i+1 << "] >>";
        cin >> s[i];
        cout << "O valor do array [" << i+1 << "] é = " << s[i] << endl;
   }

    delete [] s; // removendo o array s da memória


    return 0;
}
