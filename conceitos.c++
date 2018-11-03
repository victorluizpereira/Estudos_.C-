#include <iostream>
#include <string>

using namespace std;

int main(){


    cout << "teste de string" << endl;
    cout << "teste" << " de" << " string\n";

    // comentarios de linha
    /* comentarios de bloco */

    int x = 10, l = 3; // primeira variável int

    cout << "\n";

    cout << x << "\t" << l << endl; // exibindo no console variáveis

    int sum = x + l; // operações com a variável
    int div = x / l;
    int mult = x * l;
    int res = x % l;
    int sub = x - l;

    // exibir as operações no console.
    cout << sum << endl << div << endl << mult << endl << res << endl << sub;

    // entrada de valores

    int test;
    cout << "\nEntre com um valor inteiro:: ";
    cin >> test;    // entrada para test
    cout << endl;

    // soma com cin

    cout << "digite o primeiro valor da soma >>";
    cin >> x;
    cout << "\ndigite o segundo valor da soma >>";
    cin >> l;
    sum = x + l;
    cout << "\nO resultado da soma é >> " << sum;

    // condicionais

    if(x > l && l < x){
        cout << "\nX é o maior valor = " << x;
    }
    else{
        if(x <= l || l >= x){
            cout << "\nx ou é menor, maior ou é igual á l" << x << " " <<l;
        }
    }

    // ciclo de repetição

    while(x > 2){
        cout << "\nO valor de x agora é :" << x << endl;
        x--;
    }

    for (int i = 15; i > x; --i){
        int l=0;
        cout << "\nRepetição de conceito : " << l << endl;
        l+=1;
    }

    // fazer enquanto o valor não for comprido

    do {
        cout << "\nfazer tao função enquanto x não for igual á 10";
        cout << "\nvalor de x : "<< x;
        x+=1;
    }while(x != 10);

    // vários blocos condicionais

    switch (x) {
        case 1:
            cout << "\nprovado que x é = 1" ;
            break;
        case 2:
            cout << "\nprovado que x é = 2";
            break;
        default:
            cout << "\nNenhuma das operaçõe do switch estão funcionando";
    }

    float quebr = 3.5;
    double preci = 2.46634345;
    string text = "texto de variável";
    char car = 'a';
    bool ver = true;
    bool fals = false;

    cout << "\nValores quebrados de variáveis : "<< quebr<< endl;
    cout << "valores precisos após a virgula : " << preci << endl;
    cout << "texto da variável text é : " << text << endl;
    cout << "O caracter da variável car é : " << car << endl;

    if(ver){
        cout << "\nSe utilizando a lógica bolleana true";
    }
    if(!(fals)){
        cout << "\nSe utilizando a lógica bolleana false é o operador not";
    }

    // arrays(vetores)

    int vet[6] = {0,1,2,3,4,5}; // também pode ser feito com float, double etc.
    char vetc[6] = {'t','e','s','t','e','!'};
    string ttring = "teste vet string ";

    for(int i=0; i < 6; i++){
        cout << "\nO valor do vetor int [" << i << "] é : " << vet[i];
    }
    for(int i=0; i < 6; i++){
        cout << "\nO valor do vetor char [" << i << "] é : " << vetc[i];
    }
    cout << "\na string da variável ttring é : " << ttring;

    // matrizes bidimensionais

    int matriz[5][5] = {{1,2,3,4,5},
                        {1,2,3,4,5},
                        {1,2,3,4,5},
                        {1,2,3,4,5},
                        {1,2,3,4,5}};

    cout << "\nO valor da matriz 5 x 5 é .." << endl;

    for(int j = 0 ; j < 5; j++){
        cout << "\n";
        for(int i = 0; i < 5; i++){
            cout << "  " << matriz[j][i];
        }
    }

    return 0;
}
