#include <iostream>
#include <sstream>
#include <fstream>
#include <cstring>

using namespace std;

  struct people{
            char nombre[60];
            int edad;
            int cedula;
            float peso;
            float altura;
            char gen; 

        }p;
int main(){

    int x;
    people p;
    cout<<"Ingresa el numero de personas que deseas registrar\n";
    cin>>x;
    fstream archivo("registro.bin", ios::out| ios:: binary);
        for(int i= 0; i<x; i++){
        
        cout<<"ingrese su nombre"<<endl;
        cin>>p.nombre;
        cout<<"ingrese su edad"<<endl;
        cin>>p.edad;
        cout<<"ingresa tu cedula\n";
        cin>>p.cedula;
        cout<<"ingresa tu peso (Kg)"<<endl;
        cin>>p.peso;
        cout<<"ingresa tu estatura (metros)"<<endl;
        cin>>p.altura;
        cout<<"ingresa tu genero"<<endl;
        cin>>p.gen;
         switch (p.gen) {
        case 'm':
            cout << "Eres hombre" << endl;
            break;
        case 'f':
            cout << "Eres mujer" << endl;
            break;
        default:
            cout << "Opcion no valida. Por favor, seleccione m o f ." << endl;
            break;
    };
    archivo.write(reinterpret_cast<char *>(&p), sizeof(people));
    }
    cout<<sizeof(people)<<endl;
    archivo.close();
}
