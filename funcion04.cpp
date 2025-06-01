#include <iostream>
#include <string>
using namespace std;

int main(){
    int num, cdv=0;
    string op;
    cout<<"                 VERIFICAR SI UN NUMERO ES PRIMO"<<endl;
    do {
        cout<<"Ingrese el numero: "; cin>>num;

        if(num>0){
            for(int i=1 ; i<=num ; i++){
                if(0==num%i){
                    cdv+=1;
                }
            }
            if(cdv==2){
                cout<<"El numero si es primo"<<endl;
            }
            else cout<<"El numero no es primo"<<endl;
        }

        else {
            cout<<"ingrese un numero mayor a 0"<<endl;
            cout<<"Presione y para continuar o n para salir"<<endl; cin>>op;
        }
    } while(op=="y");

    return 0;

}