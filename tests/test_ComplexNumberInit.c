#include <stdio.h>
#include <stdlib.h>

#include "../libs/unity.h"
#include "../libs/ComplexNumber.h"

//como unity funciona con memoria necesitamos prepararla

void setUp(void){
    puts("Chesarros::Newtest");
}

void tearDown(void){
    //no importa que esten vacias ya que se encuentran en la biblioteca de unity y lo que ponga aca se anida a esa funcion

}

//todos los test reciben y mandan void
void test_ComplexNumberInit(void){
    ComplexNumber test_number = NULL ;
    test_number = newComplexNumber();
    TEST_ASSERT_NOT_NULL(test_number);
}

void test_getComplexNumberReal(void){

}


void test_getComplexNumberReal(void){

}

int main(void){
    UNITY_BEGIN();

    RUN_TEST(test_ComplexNumberInit);

    return UNITY_END();
}
