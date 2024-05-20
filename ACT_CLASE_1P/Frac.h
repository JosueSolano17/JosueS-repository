/***********************************************************************
 * Module:  Frac.h
 * Author:  DELL
 * Modified: Friday, May 17, 2024 5:12:48 PM
 * Purpose: Declaration of the class Frac
 ***********************************************************************/

#if !defined(__Frac_Frac_h)
#define __Frac_Frac_h

class Frac
{
public:
   int getDenominador(void);
   void setDenominador(int newDenominador);
   int getNumerador(void);
   void setNumerador(int newNumerador);
   Frac();
   ~Frac();
   void in(void);
   void out(void);
   Frac(int num, int den);
   Frac operator*(const Frac &obj);

protected:
private:
   int numerador;
   int denominador;


};

#endif