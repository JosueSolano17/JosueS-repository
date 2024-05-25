/***********************************************************************
 * Module:  Racional_Interfaces.h
 * Author:  Josue Solano
 * Modified: sabado, 11 de mayo de 2024 14:27:05
 * Purpose: Declaration of the class Racional_Interfaces
 ***********************************************************************/


#if !defined(__Racional_Interfaces_Racional_Interfaces_h)
#define __Racional_Interfaces_Racional_Interfaces_h
#include"Racional.h"

class Racional_Interfaces
{
public:
   virtual int Suma_int(Racional ra1, Racional r2)=0;
   virtual void Suma_void(Racional ra1, Racional r2)=0;
   virtual float Suma_float(Racional ra1, Racional r2)=0;
   virtual Racional Suam_ra(Racional ra1, Racional r2)=0;
protected:
private:

};

#endif