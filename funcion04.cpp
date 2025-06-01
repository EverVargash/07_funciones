#include <iostream>
using namespace std;

int main(){
    int num, cdv=0;
    cout<<"               VERIFICAR SI UN NUMERO ES PRIMO"<<endl;
    cout<<"Ingrese el numero: "; cin>>num;

    for(int i=1 ; i<=num ; i++){
        if(0==num%i){
            cdv+=1;
        }
    }
    if(cdv==1){
        cout<<"El numero si es primo";
    }
    else cout<<"El numero no es primo";
    return 0;
}