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
    cout<<"1) resta."<<endl;
    cout<<"2) producto."<<endl;
    cout<<"3) suma."<<endl;
    cout<<"4) division."<<endl;
    
	  cout<<"Ingrese el primer numero: "; cin>>num1;
    cout<<"Ingrese el segundo numero: "; cin>>num2;
    cout<<"ELija la operacion: "<<endl; cin>>op;
   
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
            suma(num1, num2);
            break;
        case 4:
            if(num1==0 || num2==0){
              cout<<"El numero no puede ser cero para la operacion";
            }
            else {
              division(num1, num2);
            }
            break;
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
  cout<<"La suma es: "<<a+b;
}

void division(int a, int b){
  cout<<"La primera division sera: "<<a/b<<endl;
  cout<<"La segunda division sera: "<<b/a<<endl;
}