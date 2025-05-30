#include <iostream>
using namespace std;

int factorial(int a);

int main(){
    int c, num1, num2;

    cout<<"            Combinatoria m sobre n"<<endl;
    cout<<"Ingrese el valor de m: "; cin>>num1;
    cout<<"Ingese el valor de n: "; cin>>num2;

    c=factorial(num1)/(factorial(num2)*factorial(num1 - num2));
    cout<<"La combinatoria de m sobre n es: "<<c;
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