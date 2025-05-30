#include <iostream>

using namespace std;

int factorial(int a);

int main(){
    int num;
    double sum=0;
    
    cout<<"Ingrese hasta que termino desea la suma: "<<endl; 
    cin>>num;
    
    if(num>0){
        for(int i=1 ; i<=num ; i++){
            sum+=factorial(i)/(2.0*i);
        }
        cout<<"La suma es: "<<sum;
    }
    else {
        cout<<"Ingrese un numero positivo para poder hacer la operacion";
    }
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
