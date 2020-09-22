#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test ffunctions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_power(void);
void test_squareroot(void);
void test_factorial(void);
void test_logarithm(void);
void test_logarithm10(void);
void test_temp(void);
void test_dollartoinr(void);
void test_prime(void);
/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "add", test_add);
  CU_add_test(suite, "subtract", test_subtract);
  CU_add_test(suite, "multiply", test_multiply);
  CU_add_test(suite, "divide", test_divide);
  CU_add_test(suite, "power", test_power);
  CU_add_test(suite, "squareroot", test_squareroot);
  CU_add_test(suite, "factorial", test_factorial);
  CU_add_test(suite, "logarithm", test_logarithm);
  CU_add_test(suite, "logarithm10", test_logarithm10);
  CU_add_test(suite, "temp", test_temp);
    CU_add_test(suite, "dollartoinr", test_dollartoinr);
CU_add_test(suite, "prime", test_prime);



/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_add(void) {
  CU_ASSERT(130000 == add(65000, 65000));
  
  /* Dummy fail*/
  CU_ASSERT(1500 == add(750, 7500));
}

void test_subtract(void) {
  CU_ASSERT(-3 == subtract(0, 3));
  
  /* Dummy fail*/
  CU_ASSERT(1 == subtract(1000, 900));
}

void test_multiply(void) {
  CU_ASSERT(0 == multiply(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(2 == multiply(2, 5));
}

void test_divide(void) {
  CU_ASSERT(0 == divide(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(3 == divide(2, 2));
}

void test_power(void) {
  CU_ASSERT(100 == power(10, 2));
  
  /* Dummy fail*/
  CU_ASSERT(9 == power(3, 3));
}

void test_squareroot(void) {
  CU_ASSERT(9 == squareroot(81));
  
  /* Dummy fail*/
  CU_ASSERT(3 == squareroot(27));
}

void test_factorial(void) {
  CU_ASSERT(6 == factorial(3));
  
  /* Dummy fail*/
  CU_ASSERT(240 == factorial(6));
}

void test_logarithm(void) {
  CU_ASSERT(4 == logarithm(55));
  
  /* Dummy fail*/
  CU_ASSERT(3 == logarithm(55));
}

void test_logarithm10(void) {
  CU_ASSERT(2 == logarithm(4));
  
  /* Dummy fail*/
  CU_ASSERT(6 == logarithm(35));
}

void test_temp(void) {
  CU_ASSERT(0 == temp(32));
  
  /* Dummy fail*/
  CU_ASSERT(6 == temp(35));
}

void test_dollartoinr(void) {
   CU_ASSERT(73 == dollartoinr(1));
  
  /* Dummy fail*/
   CU_ASSERT(73 == dollartoinr(2));
}

void test_prime(void) {
   CU_ASSERT(1 == prime(5));
  
  /* Dummy fail*/
   CU_ASSERT(1 == prime(4));
}