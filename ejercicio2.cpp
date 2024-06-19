#include <iostream>
using namespace std;
int main(){
    int m,d,a,x;
    cout<<"Introduce el ano: "; cin>>a;
    cout<<"Introduce el mes: "; cin>>m;
    cout<<"Introduce el dia: "; cin>>d;
    if(a>0 && m>0 && d>0){
        switch (m){
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                if(d<=31){
                    cout<<"Fecha valida";
                }else{
                    cout<<"Fecha no valida";
                }
            break;
            case 4: case 6: case 9: case 11:
                if (d<=30){
                    cout<<"Fecha valida";
                }else{
                    cout<<"Fecha no valida";
                }
            break;
            case 2:
                if((a%4==0 && a%100!=0)||a%400==0){
                    if(d<=29){
                        cout<<"Fecha valida";
                    }
                    else{
                        cout<<"Fecha no valida";
                    }
                }
                else{
                    if(d<=28){
                        cout<<"Fecha valida";
                    }
                    else{
                        cout<<"Fecha no valida";
                    }
                }
            break;
            default:
                cout<<"Mes no valido";
            break;
        }
    }else{
        cout<<"INTRODUCE UN VALOR VALIDO POSITIVO";
    }
    return 0;
}