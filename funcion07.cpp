#include <iostream>
#include <iostream>
using namespace std;

int div(int a);

int main(){
    int num;
    string op;
    cout<<"*****************************************************************"<<endl;
    cout<<"**************VERIFICAR SI UN NUMERO ES PERFECTO*****************"<<endl;
    cout<<"*****************************************************************"<<endl;
    do{
        cout<<"Ingrese un numero entero: "; cin>>num;
        if(num>0){
            if(div(num)==num){
            cout<<"El numero "<<num<<" es perfecto"<<endl;
            }
        }
        else cout<<"Ingrese un numero entero positivo"<<endl;
        cout<<"Presione cualquier otra tecla para salir"<<endl;
        cout<<"Presione y para intentar nuevamente: "; cin>>op;
        
    } while(op=="y");
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