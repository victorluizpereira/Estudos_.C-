#include<iostream>
#include<string>

using namespace std;

    // ==================================================================
    //                        Definindo uma class
    // ==================================================================

class nome
{
    public: // modificadores de acesso precisam ter :
     string name;

    public:
     void chamar(){
        cout << "Imprimir com objeto";
    }

    // ===================================================================
    //         encapsulamento (acessar informações indiretamente)
    // ===================================================================

    private: // só pode ser acessado desde de dentro da classe
        string nome_p;

    public: // forma de mandar métodos privados para fora da classe com o public
        void insert_name(string entrad){
            nome_p = entrad;
        }
    string getnome(){ // forma de acessar métodos privados utilizando o return
        return nome_p;
    }

    public:
        void exib_name(){
            cout << endl << "Nome apartir de método privado é : "<< nome_p;
        }

    // ======================================================================
    //                          construtores
    // ======================================================================

    public: // enviando parametros para o construtor
        nome(string nm){ // construtor declarado com o mesmo nome que a classe
            cout << endl << "Executando ao declarar objeto" << endl;
            insert_name(nm);
        }
    // =======================================================================
    //                           Destrutores
    // =======================================================================

    public:
        ~nome(){
            cout << endl << "Destruindo as informações do construtor dos "<<
                    "Objetos anteriormente declarados" << endl;
        }
}; // toda classe deve encerrar com ;

int main(){
    string enviar_const = "Nada para enviar por enquanto";
    nome objeto (enviar_const); // declarando objeto na classe
    objeto.chamar(); // usando o objeto para chamar

    cout << endl;

    cout << "Digite um nome para a classe de acesso público >> ";
    cin >> objeto.name;

    cout << endl << "O nome apartir da classe é : " << objeto.name << endl;

    string enviar = objeto.name + " via privado";

    objeto.insert_name(enviar); // modificando o método privado por fora da classe
    objeto.exib_name(); // exibindo o resultado
    cout << endl <<"\nOutra forma de acessar métodos privados é com o return" << endl;
    cout << "Nome privado >> " << objeto.getnome() << endl;

    nome obj1("Primeiro envio charlene");
    nome obj2("Segundo envio Cristiane");

    cout << endl << "O primeiro parametro enviado para o Construtor é : " << obj1.getnome() << endl;
    cout << "O segundo parametro enviado para o Construtor é : " << obj2.getnome() << endl;

    return 0;
}
