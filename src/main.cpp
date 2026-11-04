/*
   ====================================================================
   Archivo: src/main.cpp
   Actividad 5: Modelado de datos con Structs y Punteros
   E.E.S.T. N° 1 "Eduardo Ader" -- Vicente López -- LPR 5° 3°
   Grupo: Ian Quiroga, Santino Laudati y Dante Iglesias
   ====================================================================
*/
#include <iostream>
#include <cstring>
using namespace std;

// 1. DEFINICIÓN DE LA ESTRUCTURA (Modelo sugerido para el Proyecto Integrador Anual)
// En nuestro P.I.A. la entidad representa un sensor del prototipo
// (id del sensor, descripcion y la lectura medida).
struct EntidadProyecto {
    int id;
    char nombre[50];
    float metrica; // Representa lecturas de sensores, consumo, avance, etc.
};

// Prototipo de función con pasaje por dirección mediante puntero
void cargarDatos(EntidadProyecto* ptr);

int main() {
    // Inicialización de seguridad en la memoria Stack
    EntidadProyecto miEntidad = {0, "Vacio - Ian Quiroga", 0.0f};

    cout << "=====================================================" << endl;
    cout << " MODELADO STRUCT - ESTUDIANTES:                      " << endl;
    cout << " Ian Quiroga, Santino Laudati y Dante Iglesias       " << endl;
    cout << "=====================================================" << endl;

    // Invocación enviando la dirección física de memoria con '&'
    cargarDatos(&miEntidad);

    cout << "\n=== DATOS VERIFICADOS EN LA MEMORIA RAM ===" << endl;
    cout << "ID Registrado: " << miEntidad.id << endl;
    cout << "Nombre Registrado: " << miEntidad.nombre << endl;
    cout << "Metrica Guardada: " << miEntidad.metrica << endl;
    cout << "Direccion RAM Hexadecimal: " << &miEntidad << endl;
    cout << "Tamanio del struct en RAM: " << sizeof(miEntidad) << " bytes" << endl;
    cout << "=====================================================" << endl;

    return 0; // Código 0: Finalización exitosa
}

void cargarDatos(EntidadProyecto* ptr) {
    cout << "\n--- INGRESO DE DATOS MEDIANTE OPERADOR FLECHA ---" << endl;

    cout << "=> Ingrese el ID de la entidad (entero): ";
    cin >> ptr->id;

    // Limpieza del buffer obligatoria antes de cin.getline
    cin.ignore();

    cout << "=> Ingrese el Nombre o Descripcion: ";
    cin.getline(ptr->nombre, 50);

    cout << "=> Ingrese la Metrica de Operacion (decimal/float): ";
    cin >> ptr->metrica;
}
