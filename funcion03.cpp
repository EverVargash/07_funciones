#include <iostream>
#include <string>
using namespace std;

int factorial(int a);

int main(){

    int c, num1, num2;
    string op;
    do{   
        cout<<"                  Combinatoria m sobre n"<<endl;
        cout<<"Ingrese el valor de m: "; cin>>num1;
        cout<<"Ingese el valor de n: "; cin>>num2;
    
        if(num1>0 && num2>0 && num1>num2){
            c=factorial(num1)/(factorial(num2)*factorial(num1 - num2));
            cout<<"La combinatoria de "<<num1<<" sobre "<<num2<<" es: "<<c<<endl;
         }
        else cout<<"Ingrese numeros positivos donde m tiene que ser mayor a n"<<endl;
        cout<<"Ingrese si para intentar de nuevo: "; cin>>op;
    } while (op=="si");
    
    return 0;
}

int factorial(int a){
    int f;
    f=1;
    for(int i=2 ; i<=a ; i++){
        f*=i;
    }
    return f;
}