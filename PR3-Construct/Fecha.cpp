#include "Fecha.h"
#include <iostream>
#include <stdlib.h>
using namespace std;


int main() {
    Fecha a, b, c(21, 9, 2030);
    b.inicializaFecha(17, 6, 2000);
    a.muestraFecha();
    b.muestraFecha();
    c.muestraFecha();
}

//SE HACE LA VALIDACION EN EL CONSTRUCTOR
Fecha::Fecha(int dd, int mm, int aaaa) : dia(dd), mes(mm), anio(aaaa) {
    if (dd < 1 || dd > 31) {
        cout << "Dia erroneo" << endl;
        exit(0);
    }

    if (mm < 1 || mm > 12) {
        cout << "Mes erroneo" << endl;
        exit(0);
    }

    if (aaaa < 0 || aaaa > 2020) {
        cout << "Anio erroneo" << endl;
        exit(0);
    }
}

void Fecha::inicializaFecha(int dd, int mm, int aaaa) {
    if (dd < 1 || dd > 31) {
        cout << "Dia erroneo" << endl;
        exit(0);
    }

    if (mm < 1 || mm > 12) {
        cout << "Mes erroneo" << endl;
        exit(0);
    }

    if (aaaa < 0 || aaaa > 2020) {
        cout << "Anio erroneo" << endl;
        exit(0);
    }
    
    mes = mm;
    dia = dd;
    anio = aaaa;
    return;
}

void Fecha::muestraFecha() {
    cout << "La fecha es(dia-mes-año): " << dia << "-" << mes << "-" << anio << endl;
    return;
}
