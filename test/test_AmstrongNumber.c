#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <AmstrongNumber.h>
#define PROJECT_NAME    "Amstrong_number_check"

/* Prototypes for all the test functions */
void test_not_Amstrong(void);
void test_Amstrong(void);
/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "not Amstrong", test_not_Amstrong);
  CU_add_test(suite, "Amstrong", test_Amstrong);



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
void test_not_Amstrong(void) {
  
  CU_ASSERT(0 == AmstrongNumber(56));
  
  /* Dummy fail*/
  CU_ASSERT(0 == AmstrongNumber(153));
}

void test_Amstrong(void) {
  CU_ASSERT(1 == AmstrongNumber(153));
  
  /* Dummy fail*/
  CU_ASSERT(1 == AmstrongNumber(56));
}
