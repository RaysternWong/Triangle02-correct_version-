#include "unity.h"
#include "Triangle.h"


char *getTriangleName(int side1, int side2, int side3);



void setUp(void) {}



void tearDown(void) {}



void test_getTriangleName_given_2_2_3_should_return_isoscales(void)

{

 char *name;



 name = getTriangleName(2, 2, 3);

 UnityAssertEqualString((const char*)("isoscales"), (const char*)(name), (((void *)0)), (_U_UINT)15);

}



void test_getTriangleName_given_2_3_3_should_return_isoscales(void)

{

 char *name;



 name = getTriangleName(2, 3, 3);

 UnityAssertEqualString((const char*)("isoscales"), (const char*)(name), (((void *)0)), (_U_UINT)23);

}



void test_getTriangleName_given_3_2_3_should_return_isoscales(void)

{

 char *name;



 name = getTriangleName(3, 2, 3);

 UnityAssertEqualString((const char*)("isoscales"), (const char*)(name), (((void *)0)), (_U_UINT)31);

}





void test_getTriangleName_given_1_2_3_should_return_scalene(void)

{



 char *name;



 name= getTriangleName(4,2,3);

 UnityAssertEqualString((const char*)("scalene"), (const char*)(name), (((void *)0)), (_U_UINT)41);

}



void test_getTraingleName_given_3_3_3_should_return_equilateral(void)

{

 char *name;



 name = getTriangleName(3,3,3);

 UnityAssertEqualString((const char*)("equilateral"), (const char*)(name), (((void *)0)), (_U_UINT)49);

}



void test_getTraingleName_given_1_1_3_should_return_invalid(void)

{

   char *name;



   name = getTriangleName(1,1,3);

   UnityAssertEqualString((const char*)("invalid"), (const char*)(name), (((void *)0)), (_U_UINT)57);

}
