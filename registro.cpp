#include <iostream>
#include <sstream>
#include <fstream>
#include <cstring>

using namespace std;

  struct persona{
            char nombre[60];
            int edad;
            int cedula;
            float peso;
            float altura;
            char gen; 

        }p;
int main(){
    persona p1;
    persona p2;
    persona p3;
    int x;
    cout<<"Ingresa el numero de personas que deseas registrar\n";
    cin>>x;

  
        while (x>0){
        
        cout<<"ingrese su nombre"<<endl;
        cin>>p.nombre;
        cout<<"ingrese su edad"<<endl;
        cin>>p.edad;
        cout<<"ingresa tu cedula\n";
        cin>>p.cedula;
        cout<<"ingresa tu peso"<<endl;
        cin>>p.peso;
        cout<<"ingresa tu estatura"<<endl;
        cin>>p.altura;
        cout<<"ingresa tu genero"<<endl;
        cin>>p.gen;
         switch (p.gen) {
        case 'm':
            cout << "Has seleccionado: Masculino" << endl;
            break;
        case 'f':
            cout << "Has seleccionado: Femenino" << endl;
            break;
        case 'n':
            cout << "Has seleccionado: No binario" << endl;
            break;
        default:
            cout << "Opción no válida. Por favor, seleccione m, f o n." << endl;
            break;
    };
     x--;
    }
}
