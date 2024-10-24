#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct people {
    char nombre[60];
    int edad;
    int cedula;
    float peso;
    float altura;
    char gen; 
    int numeroDeRegistro;
};

int main() {
    int x;
    people p;

    cout << "Coloque el número de registro que desee: ";
    cin >> x;

    fstream lectura("./registro.bin", ios::in | ios::binary);

    if (!lectura.is_open()) {
        cout << "Error al abrir el archivo." << endl;
        return 1;
    }
    lectura.seekg(sizeof(people) * x, ios::beg);
    
    // Leer el registro
    lectura.read(reinterpret_cast<char*>(&p), sizeof(people));

    // Comprobar si se leyó correctamente
    if (lectura) {
        cout << "Su nombre es: " << p.nombre << endl;
        cout << "Su cédula es: " << p.cedula << endl;
        cout << "Usted tiene: " << p.edad << " años" << endl;
        cout << "Usted pesa: " << p.peso << " kg" << endl;
        cout << "Su altura en metros es de: " << p.altura << endl;
        cout << "Su género es: " << p.gen << endl;
        cout << "Y su número de registro es: " << p.numeroDeRegistro << endl;
    } else {
        cout << "No se pudo leer el registro." << endl;
    }

    lectura.close();
    return 0;
}
