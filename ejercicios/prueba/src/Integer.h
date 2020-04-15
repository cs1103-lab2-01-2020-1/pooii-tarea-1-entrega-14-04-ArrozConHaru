#ifndef EJERCICIOS_INTEGER_H
#define EJERCICIOS_INTEGER_H

#include "tipos.h"
class Integer{
TipoEntero value;
public:
    //Contructores
    Integer();
    Integer(TipoEntero value);
    Integer(const Integer& other);
    //Destructor
    ~Integer();
    //Operadores
    Integer operator=(const Integer& other);
    Integer operator+(TipoEntero value);
    Integer operator+=(TipoEntero value);
    Integer operator-(TipoEntero value);
    Integer operator-=(TipoEntero value);
    Integer operator*(TipoEntero value);
    Integer operator*=(TipoEntero value);
    Integer operator/(TipoEntero value);
    Integer operator^(TipoEntero x);
    //Comparadores logicos
    bool operator>(const Integer& other);
    bool operator>=(const Integer& other);
    bool operator<(const Integer& other);
    bool operator<=(const Integer& other);
    bool operator!=(const Integer& other);
    bool operator==(const Integer& other);

    operator TipoEntero();

    friend std::ostream& operator <<(std::ostream& os, const Integer& other);
    friend std::istream& operator >>(std::istream& os, Integer& other);


};





#endif //EJERCICIOS_INTEGER_H
