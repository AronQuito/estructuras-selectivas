#include <iostream>
using namespace std;
int main(){
    float a,b,r;
    char op;
    cout<<"Introduce los 2 numeros a operar: "; cin>>a>>b;
    cout<<"Introduce el signo a operar"; cin>>op;
    switch(op){
        case '+':
            r=a+b;
            cout<<"Respuesta: "<<r;
        break;
        case '-':
            r=a-b;
            cout<<"Respuesta: "<<r;
        break;
        case '*':
            r=a*b;
            cout<<"Respuesta: "<<r;
        break;
        case '/':
            if(b!=0){
                r=a/b;
                cout<<"Respuesta"<<r;
            }
            else{
                cout<<"No se puede";
            }
        break;
        default:
            cout<<"Operacion no valida";
        break;
    }
    return 0;
}