#include <iostream>
using namespace std;

int div(int a);

int main(){
    int num;
    cout<<"         VERIFICAR SI UN NUMERO ES PERFECTO"<<endl;
    cout<<"Ingrese un numero entero: "; cin>>num;
    if(div(num)==num) cout<<"El numero es perfecto";
    else cout<<"El numero no es perfecto";
    return 0;
}

int div(int a){
    int suma=0, i=1;
    while(i<a){
        if(a%i==0){
            suma+=i;
        }
        i++;
    }
    return suma;
}