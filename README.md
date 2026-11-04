# Sistema Proyecto – Actividad 5: Modelado de Datos con struct y Punteros (LPR 2026)

Modelado de un **sensor del prototipo del Proyecto Integrador Anual** con un `struct` de C++. Los datos se cargan en una función que recibe la dirección de la estructura y usa el operador flecha (`->`).

**E.E.S.T. N.° 1 "Eduardo Ader" – Vicente López** · Laboratorio de Programación 5° 3° · Grupo G03 · Prof. Mansilla Muñoz York E.

## Integrantes

| Integrante | Rol |
|---|---|
| Ian Quiroga | Código del struct y de `cargarDatos()` |
| Santino Laudati | Informe APA v7 y manual del programador |
| Dante Iglesias | Repositorio (ramas `main`/`development`), capturas |

## Modelo

```cpp
struct EntidadProyecto {
    int   id;
    char  nombre[50];
    float metrica;
};
void cargarDatos(EntidadProyecto* ptr);   // ptr->id, ptr->nombre, ptr->metrica
```

## Compilar y ejecutar

```powershell
g++ src/main.cpp -o src/sistemaproyecto.exe
.\src\sistemaproyecto.exe
```

## Ramas

- `main` – versiones estables
- `development` – desarrollo diario; se integra a `main` con merge

## Documentación

- [Informe APA v7](docs/InformeEEST1_LPR2026_ACT05_G03_v1.0.0.pdf)
- [Manual del programador (md)](docs/manuales/manual_programador_v1.0.0.md) · [pdf](docs/manuales/manual_programador_v1.0.0.pdf)
