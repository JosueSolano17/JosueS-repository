/***********************************************************************
 * Module:  Fecha.cpp
 * Author:  DELL
 * Modified: Sunday, May 19, 2024 10:42:44 PM
 * Purpose: Implementation of the class Fecha
 ***********************************************************************/

#include "Fecha.h"
#include <iostream>
#include <ctime>

using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::getDia()
// Purpose:    Implementation of Fecha::getDia()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Fecha::getDia(void)
{
   return dia;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::setDia(int newDia)
// Purpose:    Implementation of Fecha::setDia()
// Parameters:
// - newDia
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fecha::setDia(int newDia)
{
   dia = newDia;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::getMes()
// Purpose:    Implementation of Fecha::getMes()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Fecha::getMes(void)
{
   return mes;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::setMes(int newMes)
// Purpose:    Implementation of Fecha::setMes()
// Parameters:
// - newMes
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fecha::setMes(int newMes)
{
   mes = newMes;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::getAnio()
// Purpose:    Implementation of Fecha::getAnio()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Fecha::getAnio(void)
{
   return anio;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::setAnio(int newAnio)
// Purpose:    Implementation of Fecha::setAnio()
// Parameters:
// - newAnio
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fecha::setAnio(int newAnio)
{
   anio = newAnio;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::Fecha()
// Purpose:    Implementation of Fecha::Fecha()
// Return:     
////////////////////////////////////////////////////////////////////////

Fecha::Fecha()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::~Fecha()
// Purpose:    Implementation of Fecha::~Fecha()
// Return:     
////////////////////////////////////////////////////////////////////////

Fecha::~Fecha()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::in()
// Purpose:    Implementation of Fecha::in()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fecha::in(void)
{
   cout << dia << "/" << mes << "/" << anio << endl;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::out()
// Purpose:    Implementation of Fecha::leer()
// Return:     void
////////////////////////////////////////////////////////////////////////


void Fecha :: leer(void) {
        char sep1, sep2;
        cin >> dia >> sep1 >> mes >> sep2 >> anio;
        
}


Fecha :: Fecha(int dia, int mes, int anio){
   dia = dia;
   mes = mes;
   anio = anio;
}

int Fecha :: operator-(const Fecha &obj){
        tm a = {};
        a.tm_mday = dia;
        a.tm_mon = mes - 1;  // Ajustamos el mes
        a.tm_year = anio - 1900; // Ajustamos el año (desde 1900)

        tm b = {};
        b.tm_mday = obj.dia;
        b.tm_mon = obj.mes - 1;  // Ajustamos el mes
        b.tm_year = obj.anio - 1900; // Ajustamos el año (desde 1900)

        time_t x = mktime(&a);
        time_t y = mktime(&b);

        // Calculamos la diferencia en segundos y convertimos a días
        double diferencia = difftime(x, y) / (60 * 60 * 24);
        return static_cast<int>(diferencia);
}