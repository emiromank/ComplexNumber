/**
 * @author Clase de aplicaciones con Cesar
 * @date 17 ago 21
 * @name ComplexNumber
 **/

#ifndef ComplexNumber_h
#define ComplexNumber_h

#include <stdio.h>

#define COMPLEX_NUMBER struct _Complex_Number

COMPLEX_NUMBER{
    float real; //32
    float imaginary; //32
};

//La interfaz
typedef COMPLEX_NUMBER * ComplexNumber;//utiliza 16 bits en lugar de 64

ComplexNumber newComplexNumber(void);

ComplexNumber setComplexNumber(ComplexNumber new_number, float real,float imaginary);

float getReal(ComplexNumber number);

float getImaginary(ComplexNumber number);

ComplexNumber freeComplexNumber(ComplexNumber target);

#endif