/* NOTE - eventually this file will be automatically updated using a Perl script that understand
 * the naming of test case files, functions, and namespaces.
 */

#include <time.h>   /* for time() */
#include <stdlib.h> /* for srand() */

#include "std_testcase.h"
#include "testcases.h"

int main(int argc, char * argv[]) {

	/* seed randomness */

	srand( (unsigned)time(NULL) );

	globalArgc = argc;
	globalArgv = argv;

#ifndef OMITGOOD

	/* Calling C good functions */
	/* BEGIN-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */
	printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_01_good();");
	CWE191_Integer_Underflow__int_rand_multiply_01_good();

	printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_52_good();");
	CWE191_Integer_Underflow__int_rand_multiply_52_good();


	printLine("Calling CWE191_Integer_Underflow__int_rand_sub_01_good();");
	CWE191_Integer_Underflow__int_rand_sub_01_good();


	printLine("Calling CWE191_Integer_Underflow__int_rand_sub_52_good();");
	CWE191_Integer_Underflow__int_rand_sub_52_good();


	printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_01_good();");
	CWE191_Integer_Underflow__short_fscanf_multiply_01_good();

	printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_52_good();");
	CWE191_Integer_Underflow__short_fscanf_multiply_52_good();


	printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_01_good();");
	CWE191_Integer_Underflow__short_fscanf_sub_01_good();

	printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_52_good();");
	CWE191_Integer_Underflow__short_fscanf_sub_52_good();


	printLine("Calling CWE191_Integer_Underflow__short_min_multiply_01_good();");
	CWE191_Integer_Underflow__short_min_multiply_01_good();


	printLine("Calling CWE191_Integer_Underflow__short_min_multiply_52_good();");
	CWE191_Integer_Underflow__short_min_multiply_52_good();


	printLine("Calling CWE191_Integer_Underflow__short_min_sub_01_good();");
	CWE191_Integer_Underflow__short_min_sub_01_good();

	printLine("Calling CWE191_Integer_Underflow__short_min_sub_52_good();");
	CWE191_Integer_Underflow__short_min_sub_52_good();


	printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_01_good();");
	CWE191_Integer_Underflow__short_rand_multiply_01_good();


	printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_52_good();");
	CWE191_Integer_Underflow__short_rand_multiply_52_good();

	printLine("Calling CWE191_Integer_Underflow__short_rand_sub_01_good();");
	CWE191_Integer_Underflow__short_rand_sub_01_good();

	printLine("Calling CWE191_Integer_Underflow__short_rand_sub_52_good();");
	CWE191_Integer_Underflow__short_rand_sub_52_good();

	printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_01_good();");
	CWE191_Integer_Underflow__unsigned_int_fscanf_sub_01_good();


	printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_52_good();");
	CWE191_Integer_Underflow__unsigned_int_fscanf_sub_52_good();

	printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_01_good();");
	CWE191_Integer_Underflow__unsigned_int_min_sub_01_good();

	printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_52_good();");
	CWE191_Integer_Underflow__unsigned_int_min_sub_52_good();

	printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_01_good();");
	CWE191_Integer_Underflow__unsigned_int_rand_sub_01_good();


	printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_52_good();");
	CWE191_Integer_Underflow__unsigned_int_rand_sub_52_good();


	/* END-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */


#endif /* OMITGOOD */

#ifndef OMITBAD

	/* Calling C bad functions */
	/* BEGIN-AUTOGENERATED-C-BAD-FUNCTION-CALLS */
	
	printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_01_bad();");
	CWE191_Integer_Underflow__int_rand_multiply_01_bad();

	printLine("Calling CWE191_Integer_Underflow__int_rand_multiply_52_bad();");
	CWE191_Integer_Underflow__int_rand_multiply_52_bad();


	printLine("Calling CWE191_Integer_Underflow__int_rand_sub_01_bad();");
	CWE191_Integer_Underflow__int_rand_sub_01_bad();


	printLine("Calling CWE191_Integer_Underflow__int_rand_sub_52_bad();");
	CWE191_Integer_Underflow__int_rand_sub_52_bad();


	printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_01_bad();");
	CWE191_Integer_Underflow__short_fscanf_multiply_01_bad();

	printLine("Calling CWE191_Integer_Underflow__short_fscanf_multiply_52_bad();");
	CWE191_Integer_Underflow__short_fscanf_multiply_52_bad();


	printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_01_bad();");
	CWE191_Integer_Underflow__short_fscanf_sub_01_bad();

	printLine("Calling CWE191_Integer_Underflow__short_fscanf_sub_52_bad();");
	CWE191_Integer_Underflow__short_fscanf_sub_52_bad();


	printLine("Calling CWE191_Integer_Underflow__short_min_multiply_01_bad();");
	CWE191_Integer_Underflow__short_min_multiply_01_bad();


	printLine("Calling CWE191_Integer_Underflow__short_min_multiply_52_bad();");
	CWE191_Integer_Underflow__short_min_multiply_52_bad();


	printLine("Calling CWE191_Integer_Underflow__short_min_sub_01_bad();");
	CWE191_Integer_Underflow__short_min_sub_01_bad();

	printLine("Calling CWE191_Integer_Underflow__short_min_sub_52_bad();");
	CWE191_Integer_Underflow__short_min_sub_52_bad();


	printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_01_bad();");
	CWE191_Integer_Underflow__short_rand_multiply_01_bad();


	printLine("Calling CWE191_Integer_Underflow__short_rand_multiply_52_bad();");
	CWE191_Integer_Underflow__short_rand_multiply_52_bad();

	printLine("Calling CWE191_Integer_Underflow__short_rand_sub_01_bad();");
	CWE191_Integer_Underflow__short_rand_sub_01_bad();

	printLine("Calling CWE191_Integer_Underflow__short_rand_sub_52_bad();");
	CWE191_Integer_Underflow__short_rand_sub_52_bad();

	printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_01_bad();");
	CWE191_Integer_Underflow__unsigned_int_fscanf_sub_01_bad();


	printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_sub_52_bad();");
	CWE191_Integer_Underflow__unsigned_int_fscanf_sub_52_bad();

	printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_01_bad();");
	CWE191_Integer_Underflow__unsigned_int_min_sub_01_bad();

	printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_sub_52_bad();");
	CWE191_Integer_Underflow__unsigned_int_min_sub_52_bad();

	printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_01_bad();");
	CWE191_Integer_Underflow__unsigned_int_rand_sub_01_bad();


	printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_sub_52_bad();");
	CWE191_Integer_Underflow__unsigned_int_rand_sub_52_bad();
#endif /* OMITBAD */

	return 0;

} 
