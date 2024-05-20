/***********************************************************************
 * Module:  Sobrecarga.cpp
 * Author:  DELL
 * Modified: Sunday, May 19, 2024 6:08:38 PM
 * Purpose: Implementation of the class Sobrecarga
 ***********************************************************************/

#include "Sobrecarga.h"
#include <iostream>

using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       Sobrecarga::getNumerador()
// Purpose:    Implementation of Sobrecarga::getNumerador()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Sobrecarga::getNumerador(void)
{
   return numerador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Sobrecarga::setNumerador(int newNumerador)
// Purpose:    Implementation of Sobrecarga::setNumerador()
// Parameters:
// - newNumerador
// Return:     void
////////////////////////////////////////////////////////////////////////

void Sobrecarga::setNumerador(int newNumerador)
{
   numerador = newNumerador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Sobrecarga::getDenominador()
// Purpose:    Implementation of Sobrecarga::getDenominador()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Sobrecarga::getDenominador(void)
{
   return denominador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Sobrecarga::setDenominador(int newDenominador)
// Purpose:    Implementation of Sobrecarga::setDenominador()
// Parameters:
// - newDenominador
// Return:     void
////////////////////////////////////////////////////////////////////////

void Sobrecarga::setDenominador(int newDenominador)
{
   denominador = newDenominador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Sobrecarga::Sobrecarga()
// Purpose:    Implementation of Sobrecarga::Sobrecarga()
// Return:     
////////////////////////////////////////////////////////////////////////

Sobrecarga::Sobrecarga()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       Sobrecarga::~Sobrecarga()
// Purpose:    Implementation of Sobrecarga::~Sobrecarga()
// Return:     
////////////////////////////////////////////////////////////////////////

Sobrecarga::~Sobrecarga()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Sobrecarga::in()
// Purpose:    Implementation of Sobrecarga::in()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Sobrecarga::in(void)
{
   cout << "Ingrese el numerador: ";
   cin >> numerador;
   cout << "Ingrese el denominador: ";
   cin >> denominador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Sobrecarga::out()
// Purpose:    Implementation of Sobrecarga::out()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Sobrecarga::out(void)
{
  cout << numerador << "/" << denominador << endl;
}

Sobrecarga :: Sobrecarga(int num, int den){
   numerador = num;
   denominador = den;
}

Sobrecarga Sobrecarga::operator-(const Sobrecarga &obj){
   int num = (numerador * obj.denominador) - (obj.numerador*denominador);
   int den = denominador*obj.denominador;
   return Sobrecarga(num,den);
}