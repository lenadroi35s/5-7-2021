#include <iostream>
using namespace std;
int mayor(int a, int b, int c) {
    int d;
    if (a > b)
        if (a > c)
            d = a;
        else
            d = c;
    else if (b > c)
        d = b;
    else
        d = c;
    return d;
}
string nmes(int a){
    string b="";
    if(a==1)
        b="Enero";
    else if(a==2)
        b="Febrero";
    else if(a==3)
        b="Marzo";
    else if(a==4)
        b="Abril";
    else if(a==5)
        b="Mayo";
    else if(a==6)
        b="Junio";
    else if(a==7)
        b="Julio";
    else if(a==8)
        b="Agosto";
    else if(a==9)
        b="Septiembre";
    else if(a==10)
        b="Octubre";
    else if(a==11)
        b="Noviembre";
    else if(a==12)
        b="Diciembre";
    else
        b="Mes fuera de rango";
    return b;

}
string cua(int a, string b){
    string aux="";
    for(int x=1;x<=a;x++) {
        for (int c = 1; c <= 10; c++)
            aux = aux + b;
        aux = aux + "\n";
    }
    return aux;
}
void cua2(int a, char b){
    for(int c=1;c<=a;c++)
    {
        for(int d=1; d<=10;d++)
            cout<<b;
        cout<<endl;
    }
}
bool esPrimo (int num){
    int cont=2;
    bool flat=true;
    while(cont <= num /2 && flat==true){
        if(num % cont == 0)
            flat=false;
        cont++;
    }
    return flat;
}
void imprimeprimos(int a){
    int b=1; int c=1;
    while(b<=a)
    {
        c++;
        if(esPrimo(c))
        {
            cout<<" "<< c;
            b++;
        }
    }
}
int sumaprimo(int a){
    int b=1; int c=1; int d=0;
    while(b<=a)
    {
        c++;
        if(esPrimo(c))
        {
            d+=c;b++;
        }
    }
    return d;
}
int mesess(int nd){
    if (nd == 1){
        cout<<"El mes es Enero tiene 31 dias"<<endl;
    }
    else if(nd == 2){
        cout<< "El mes es Febrero tiene 28 dias"<<endl;
    }
    else if(nd == 3){
        cout<< "El mes es Marzo tiene 31 dias"<<endl;
    }
    else if(nd == 4){
        cout<< "El mes es Abril tiene 30 dias"<<endl;
    }
    else if(nd == 5){
        cout<< "El mes es Mayo tiene 31 dias "<<endl;
    }
    else if(nd == 6){
        cout<< "El mes es Junio tiene 30 dias"<<endl;
    }
    else if(nd == 7){
        cout<< "El mes es Julio tiene 31 dias"<<endl;
    }
    else if(nd == 8){
        cout<< "El mes es Agosto tiene 31 dias"<<endl;
    }
    else if(nd == 9){
        cout<< "El mes es Septiembre tiene 30 dias"<<endl;
    }
    else if(nd == 10){
        cout<< "El mes es Octubre tiene 31 dias"<<endl;
    }
    else if(nd == 11){
        cout<< "El mes es Noviembre tiene 30 dias"<<endl;
    }
    else if(nd == 12){
        cout<< "El mes es Diciembre tiene 31 dias"<<endl;
    }
    else{
        cout<<"El mes ingresado es incorrecto"<<endl;
    }
return 0;
}
int main() {
    //Diseñe la función que recibe un entero que representa el mes del año
    // La función debe retornar el día máximo que trae ese mes.
    // Por ejemplo, si es 7 debe devolver 31. Ojo con el mes de Febrero
    int a;
    cout<< "Ingrese un entero"<<endl;
    cin>>a;
    cout<<mesess(a)<<endl;
    int ma,maa,may;
    cout<<"Ingrese 3 numeros enteros"<<endl;
    cin>>ma;
    cin>>maa;
    cin>>may;
    cout<<mayor(ma,maa,may)<<endl;
    int mm;
    cout<<"Ingrese 1 numeros enteros"<<endl;
    cin>>mm;
    cout<<nmes(mm)<<endl;

    return 0;
}
