#include <stdio.h>
#include <stdlib.h>

#include "../libs/ComplexNumber.h"

//se supone que no deberia de haber comments pero yolo, (ya que es un self commmented code)

ComplexNumber newComplexNumber(void){ //solamente le da memoria
    ComplexNumber my_number = NULL; //TODOS LOS POINTERS DEBEN REFERIRSE A NULL
    my_number = malloc(sizeof(COMPLEX_NUMBER));

    return my_number;
}

ComplexNumber setComplexNumber(ComplexNumber new_number, float real,float imaginary){
    new_number->real = real;
    new_number->imaginary = imaginary;

    return new_number;
}

float getReal(ComplexNumber number){
    return number->real;
}

float getImaginary(ComplexNumber number){
    return number->imaginary;
}

ComplexNumber freeComplexNumber(ComplexNumber target){
    free(target);
    target = NULL;
    return target;
}