#include <iostream>
using namespace std;
int main(){
    bool salir=0;
    float a,b,r;
    char op;
    do{
        cout<<"Calculadora!"<<endl<<endl;
        cout<<"+) SUMAR"<<endl;
        cout<<"-) RESTAR"<<endl;
        cout<<"*) MULTIPLICACION"<<endl;
        cout<<"/) DIVIDIR"<<endl;
        cout<<"0) salir"<<endl<<endl;
        cout<<"Introduce el signo a operar o la opcion: "; cin>>op;
        system("cls");
        switch(op){
            case '+':
                cout<<"Introduce los 2 numeros a operar: "; cin>>a>>b;
                r=a+b;
                cout<<"Respuesta: "<<r<<endl;
                system("pause");
            break;
            case '-':
                cout<<"Introduce los 2 numeros a operar: "; cin>>a>>b;
                r=a-b;
                cout<<"Respuesta: "<<r<<endl;
                system("pause");
            break;
            case '*':
                cout<<"Introduce los 2 numeros a operar: "; cin>>a>>b;
                r=a*b;
                cout<<"Respuesta: "<<r<<endl;
                system("pause");
            break;
            case '/':
                cout<<"Introduce los 2 numeros a operar: "; cin>>a>>b;
                if(b!=0){
                    r=a/b;
                    cout<<"Respuesta"<<r<<endl;
                    system("pause");
                }
                else{
                    cout<<"No se puede"<<endl;
                    system("pause");
                }
            break;
            case '0':
                salir=1;
            break;
            default:
                cout<<"Operacion no valida"<<endl;
                system("pause");
            break;
        }
        system("cls");
    }while(salir==0);
    return 0;
}