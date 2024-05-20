/***********************************************************************
 * Module:  Sobrecarga.h
 * Author:  DELL
 * Modified: Sunday, May 19, 2024 6:08:38 PM
 * Purpose: Declaration of the class Sobrecarga
 ***********************************************************************/

#if !defined(__Sobrecarga_Sobrecarga_h)
#define __Sobrecarga_Sobrecarga_h

class Sobrecarga
{
public:
   int getNumerador(void);
   void setNumerador(int newNumerador);
   int getDenominador(void);
   void setDenominador(int newDenominador);
   Sobrecarga();
   ~Sobrecarga();
   void in(void);
   void out(void);
   Sobrecarga(int num, int den);
   Sobrecarga operator-(const Sobrecarga &obj);

protected:
private:
   int numerador;
   int denominador;


};

#endif