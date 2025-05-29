//Este sera la primera funcion de las 7
#include <iostream>

using namespace std;

void resta(int a, int b);
void producto(int a, int b);
void suma(int a, int b);
void division(int a, int b);

int main(){
    int op, num1, num2;
    cout<<"              CALCULADORA"<<endl;
    cout<<"Operaciones:"<<endl;
    cout<<"1)resta"<<endl;
    cout<<"2)producto"<<endl;
    cout<<"ELija la operacion: "<<endl; cin>>op;
	cout<<"Ingrese el primer numero: "; cin>>num1;
    cout<<"Ingrese el segundo numero: "; cin>>num2;
    
   
    switch(op){
        case 1:
            cout<<"La primera resta es: ";
			resta(num1, num2);
            cout<<"La segunda resta es: ";
			resta(num2, num1);
            break;
        case 2:
            cout<<"La multiplicacion es: ";
			producto(num1, num2);
            break;
        case 3:
            cout<<"La suma es: ";
            suma(num1, num2);
            break;
        case 4:
            division(num1, num2);
        default:
            cout<<"ingrese una opcion valida";
    }
    return 0;
}

void resta(int a,int b){
    cout<<a-b<<endl;
}

void producto(int a,int b){
    int pord;
    cout<<a*b<<endl;
}

void suma(int a, int b){
    cout<<a*b<<endl;
}

void division(int a, int b){
    if(a==0 && b==0){
        cout<<"Ingrese valores diferentes de cero";
    }
    else {
        cout<<"La primera division sera: "<<a/b<<endl;
        cout<<"La segunda division sera: "<<b/a<<endl;
    }
}