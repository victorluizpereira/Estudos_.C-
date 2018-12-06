#include <iostream>
#include <string>

using namespace std;

int main(){

        int tabuada[10][10];

        cout << "\n\t==============================================================" << endl;
        cout << "\t\t\t\t    Tabuada" << endl;
        cout << "\t==============================================================" << endl;

        for(int i = 0; i < 10 ; ++i){
            for(int j=0; j < 10; ++j){
                tabuada[i][j] = (i+1) * (j+1);
            }
        }

        cout << "\n\n" ;

        for(int i=0; i < 10; ++i){
         cout <<"  ";
            for(int j=0; j < 5; ++j){
                cout << j+1 << " * " << i+1 << " = " << tabuada[i][j] << "\t";
            }
            cout << endl;
        }
        cout << endl;

        for(int i=0; i < 10; ++i){
            cout << "  ";
            for(int j=0; j < 5; ++j){
                cout << j+6 << " * " << i+1 << " = " << tabuada[i][5+j] << "\t";
            }
            cout<<endl;
        }



        return 0;
}
