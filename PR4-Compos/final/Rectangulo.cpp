#include <iostream>
#include <stdlib.h>
using namespace std;

#include "Coordenada.h"
#include "Rectangulo.h"

 Rectangulo::Rectangulo() : superiorIzq(0,0), inferiorDer(0,0)
 { }

 Rectangulo::Rectangulo(double xSupIzq, double ySupIzq, double xInfDer, double yInfDer):superiorIzq(xSupIzq, ySupIzq), inferiorDer(xInfDer, yInfDer)
 { }

 void Rectangulo::imprimeEsq()
 {
    cout << "Para la esquina superior izquierda.\n";
    cout << "x = " << superiorIzq.obtenerX() << " y = " << superiorIzq.obtenerY() << endl;
    cout << "Para la esquina inferior derecha.\n";
    cout << "x = " << inferiorDer.obtenerX() << " y = " << inferiorDer.obtenerY() << endl;
 }
 
 //3 OBTIENE AREA
 double Rectangulo::obtieneArea(double b, double a){
	return b*a;
}
 
 

 Coordenada Rectangulo::obtieneSupIzq()
 {
    return superiorIzq;
 }

 Coordenada Rectangulo::obtieneInfDer()
 {
    return inferiorDer;
 }

 Rectangulo::Rectangulo(Coordenada c1,Coordenada c2){
	superiorIzq = c1;
	inferiorDer = c2;
}
