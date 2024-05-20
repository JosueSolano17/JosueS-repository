/***********************************************************************
 * Module:  Fecha.h
 * Author:  DELL
 * Modified: Sunday, May 19, 2024 10:42:44 PM
 * Purpose: Declaration of the class Fecha
 ***********************************************************************/

#if !defined(__Fechas_Fecha_h)
#define __Fechas_Fecha_h

class Fecha
{
public:
   int getDia(void);
   void setDia(int newDia);
   int getMes(void);
   void setMes(int newMes);
   int getAnio(void);
   void setAnio(int newAnio);
   Fecha();
   ~Fecha();
   void in(void);
   void leer(void);
   Fecha(int dia, int mes, int anio);
   int operator-(const Fecha &obj);

protected:
private:
   int dia;
   int mes;
   int anio;


};

#endif