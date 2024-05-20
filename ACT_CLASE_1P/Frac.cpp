/***********************************************************************
 * Module:  Frac.cpp
 * Author:  DELL
 * Modified: Friday, May 17, 2024 5:12:48 PM
 * Purpose: Implementation of the class Frac
 ***********************************************************************/

#include "Frac.h"
#include <iostream>

using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       Frac::getDenominador()
// Purpose:    Implementation of Frac::getDenominador()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Frac::getDenominador(void)
{
   return denominador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Frac::setDenominador(int newDenominador)
// Purpose:    Implementation of Frac::setDenominador()
// Parameters:
// - newDenominador
// Return:     void
////////////////////////////////////////////////////////////////////////

void Frac::setDenominador(int newDenominador)
{
   denominador = newDenominador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Frac::getNumerador()
// Purpose:    Implementation of Frac::getNumerador()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Frac::getNumerador(void)
{
   return numerador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Frac::setNumerador(int newNumerador)
// Purpose:    Implementation of Frac::setNumerador()
// Parameters:
// - newNumerador
// Return:     void
////////////////////////////////////////////////////////////////////////

void Frac::setNumerador(int newNumerador)
{
   numerador = newNumerador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Frac::Frac()
// Purpose:    Implementation of Frac::Frac()
// Return:     
////////////////////////////////////////////////////////////////////////

Frac::Frac()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       Frac::~Frac()
// Purpose:    Implementation of Frac::~Frac()
// Return:     
////////////////////////////////////////////////////////////////////////

Frac::~Frac()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Frac::in()
// Purpose:    Implementation of Frac::in()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Frac::in(void)
{
   cout << "Ingrese el numerador: ";
   cin >> numerador;
   cout << "Ingrese el denominador: ";
   cin >> denominador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Frac::out()
// Purpose:    Implementation of Frac::out()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Frac::out(void)
{
   cout << numerador << "/" << denominador << endl;
}

////////////////////////////////////////////////////////////////////////
// Name:       Frac::Frac(int num, int dem)
// Purpose:    Implementation of Frac::Frac()
// Parameters:
// - num
// - dem
// Return:     
////////////////////////////////////////////////////////////////////////

Frac::Frac(int num, int dem)
{
   numerador=num;
   denominador=dem;

}

Frac Frac::operator*(const Frac &obj)  {
    return Frac(numerador * obj.numerador, denominador * obj.denominador);
}