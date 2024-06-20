#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a,b,c;
    double d,x1,x2;
    cout<<"Verificador de ecuaciones cuadraticas!"<<endl;
    cout<<"ECUACION BASE : a(x^2) + bx + c"<<endl<<endl;
    cout<<"Introduce los a,b,c: "; cin>>a>>b>>c;
    d=pow(b,2)-4*a*c;
    if(d>=0){
        if(d==0){
            x1=(pow(d,1/2)-b)/2*a;
            x2=x1;
        }
        else{
            x1=(pow(d,1/2)-b)/2*a;
            x2=(-pow(d,1/2)-b)/2*a;
        }
        cout<<"x1: "<<x1;
        cout<<"x2: "<<x2;
    }
    else{
        cout<<"No hay raices en Reales";
    }
    return 0;
}
