//
// Created by Harlop on 14/04/2020.
//

#ifndef EJERCICIOS_NUMBER_H
#define EJERCICIOS_NUMBER_H

#include "tipos.h"

template <typename T>

class Number{
private:
    T value;
public:
    Number();
    Number(T value);
    Number(const Number& other);
    ~Number();
    //Operadores
    Number operator=(const Number& other);
    Number operator+(T value);
    Number operator +=(T value);
    Number operator-(T value);
    Number operator -=(T value);
    Number operator*(T value);
    Number operator *=(T value);
    Number operator/(T value);
    Number operator^(T value);
    //Comparadores logicos
    bool operator >(int value);
    bool operator >=(int value);
    bool operator <(int value);
    bool operator <=(int value);
    bool operator ==(int value);
    bool operator !=(int value);

    operator TipoEntero();


    template <typename U>
    friend std::ostream& operator <<(std::ostream& os, const Number<U>&);
    template <typename U>
    friend std::istream& operator >>(std::istream& os, Number<U>&);



};



#endif //EJERCICIOS_NUMBER_H
