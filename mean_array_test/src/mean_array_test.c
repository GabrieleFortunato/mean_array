/*
 ============================================================================
 Name        : mean_array_test.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <CUnit/basic.h>
#include "mean_array.h"

int init_suite_default(){
	return ZERO;
}

int clear_suite_default(){
	return ZERO;
}

void test_length(){
}

void test_mean(){
}

int main(void) {
	CU_initialize_registry();
	CU_pSuite pSuite_A = CU_add_suite("SUITE A",init_suite_default,clear_suite_default);
	CU_add_test(pSuite_A,"test of generate_number()",test_length);
	CU_pSuite pSuite_B = CU_add_suite("SUITE B",init_suite_default,clear_suite_default);
	CU_add_test(pSuite_B,"test of median()",test_mean);
	CU_basic_set_mode(CU_BRM_VERBOSE);
	CU_basic_run_tests();
	CU_cleanup_registry();
	return CU_get_error();
}
