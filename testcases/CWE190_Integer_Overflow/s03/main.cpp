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
	printLine("Calling CWE190_Integer_Overflow__int_fgets_multiply_01_good();");
	CWE190_Integer_Overflow__int_fgets_multiply_01_good();

	printLine("Calling CWE190_Integer_Overflow__int_fgets_multiply_54_good();");
	CWE190_Integer_Overflow__int_fgets_multiply_54_good();


	printLine("Calling CWE190_Integer_Overflow__int_fgets_square_01_good();");
	CWE190_Integer_Overflow__int_fgets_square_01_good();

	printLine("Calling CWE190_Integer_Overflow__int_fgets_square_54_good();");
	CWE190_Integer_Overflow__int_fgets_square_54_good();


	printLine("Calling CWE190_Integer_Overflow__int_fscanf_add_01_good();");
	CWE190_Integer_Overflow__int_fscanf_add_01_good();


	printLine("Calling CWE190_Integer_Overflow__int_fscanf_add_54_good();");
	CWE190_Integer_Overflow__int_fscanf_add_54_good();


	printLine("Calling CWE190_Integer_Overflow__int_fscanf_multiply_01_good();");
	CWE190_Integer_Overflow__int_fscanf_multiply_01_good();


	printLine("Calling CWE190_Integer_Overflow__int_fscanf_multiply_54_good();");
	CWE190_Integer_Overflow__int_fscanf_multiply_54_good();


	printLine("Calling CWE190_Integer_Overflow__int_fscanf_square_01_good();");
	CWE190_Integer_Overflow__int_fscanf_square_01_good();

	printLine("Calling CWE190_Integer_Overflow__int_fscanf_square_54_good();");
	CWE190_Integer_Overflow__int_fscanf_square_54_good();


	printLine("Calling CWE190_Integer_Overflow__int_listen_socket_add_01_good();");
	CWE190_Integer_Overflow__int_listen_socket_add_01_good();


	printLine("Calling CWE190_Integer_Overflow__int_listen_socket_add_54_good();");
	CWE190_Integer_Overflow__int_listen_socket_add_54_good();


	printLine("Calling CWE190_Integer_Overflow__int_listen_socket_multiply_01_good();");
	CWE190_Integer_Overflow__int_listen_socket_multiply_01_good();


	printLine("Calling CWE190_Integer_Overflow__int_listen_socket_multiply_54_good();");
	CWE190_Integer_Overflow__int_listen_socket_multiply_54_good();


	printLine("Calling CWE190_Integer_Overflow__int_listen_socket_square_01_good();");
	CWE190_Integer_Overflow__int_listen_socket_square_01_good();


	printLine("Calling CWE190_Integer_Overflow__int_listen_socket_square_54_good();");
	CWE190_Integer_Overflow__int_listen_socket_square_54_good();


	printLine("Calling CWE190_Integer_Overflow__int_max_add_01_good();");
	CWE190_Integer_Overflow__int_max_add_01_good();


	printLine("Calling CWE190_Integer_Overflow__int_max_add_54_good();");
	CWE190_Integer_Overflow__int_max_add_54_good();

	printLine("Calling CWE190_Integer_Overflow__int_max_multiply_01_good();");
	CWE190_Integer_Overflow__int_max_multiply_01_good();


	printLine("Calling CWE190_Integer_Overflow__int_max_multiply_54_good();");
	CWE190_Integer_Overflow__int_max_multiply_54_good();


	printLine("Calling CWE190_Integer_Overflow__int_max_square_01_good();");
	CWE190_Integer_Overflow__int_max_square_01_good();


	printLine("Calling CWE190_Integer_Overflow__int_max_square_54_good();");
	CWE190_Integer_Overflow__int_max_square_54_good();


	/* END-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */


#endif /* OMITGOOD */

#ifndef OMITBAD

	/* Calling C bad functions */
	/* BEGIN-AUTOGENERATED-C-BAD-FUNCTION-CALLS */
	
	printLine("Calling CWE190_Integer_Overflow__int_fgets_multiply_01_bad();");
	CWE190_Integer_Overflow__int_fgets_multiply_01_bad();

	printLine("Calling CWE190_Integer_Overflow__int_fgets_multiply_54_bad();");
	CWE190_Integer_Overflow__int_fgets_multiply_54_bad();


	printLine("Calling CWE190_Integer_Overflow__int_fgets_square_01_bad();");
	CWE190_Integer_Overflow__int_fgets_square_01_bad();

	printLine("Calling CWE190_Integer_Overflow__int_fgets_square_54_bad();");
	CWE190_Integer_Overflow__int_fgets_square_54_bad();


	printLine("Calling CWE190_Integer_Overflow__int_fscanf_add_01_bad();");
	CWE190_Integer_Overflow__int_fscanf_add_01_bad();


	printLine("Calling CWE190_Integer_Overflow__int_fscanf_add_54_bad();");
	CWE190_Integer_Overflow__int_fscanf_add_54_bad();


	printLine("Calling CWE190_Integer_Overflow__int_fscanf_multiply_01_bad();");
	CWE190_Integer_Overflow__int_fscanf_multiply_01_bad();


	printLine("Calling CWE190_Integer_Overflow__int_fscanf_multiply_54_bad();");
	CWE190_Integer_Overflow__int_fscanf_multiply_54_bad();


	printLine("Calling CWE190_Integer_Overflow__int_fscanf_square_01_bad();");
	CWE190_Integer_Overflow__int_fscanf_square_01_bad();

	printLine("Calling CWE190_Integer_Overflow__int_fscanf_square_54_bad();");
	CWE190_Integer_Overflow__int_fscanf_square_54_bad();


	printLine("Calling CWE190_Integer_Overflow__int_listen_socket_add_01_bad();");
	CWE190_Integer_Overflow__int_listen_socket_add_01_bad();


	printLine("Calling CWE190_Integer_Overflow__int_listen_socket_add_54_bad();");
	CWE190_Integer_Overflow__int_listen_socket_add_54_bad();


	printLine("Calling CWE190_Integer_Overflow__int_listen_socket_multiply_01_bad();");
	CWE190_Integer_Overflow__int_listen_socket_multiply_01_bad();


	printLine("Calling CWE190_Integer_Overflow__int_listen_socket_multiply_54_bad();");
	CWE190_Integer_Overflow__int_listen_socket_multiply_54_bad();


	printLine("Calling CWE190_Integer_Overflow__int_listen_socket_square_01_bad();");
	CWE190_Integer_Overflow__int_listen_socket_square_01_bad();


	printLine("Calling CWE190_Integer_Overflow__int_listen_socket_square_54_bad();");
	CWE190_Integer_Overflow__int_listen_socket_square_54_bad();


	printLine("Calling CWE190_Integer_Overflow__int_max_add_01_bad();");
	CWE190_Integer_Overflow__int_max_add_01_bad();


	printLine("Calling CWE190_Integer_Overflow__int_max_add_54_bad();");
	CWE190_Integer_Overflow__int_max_add_54_bad();

	printLine("Calling CWE190_Integer_Overflow__int_max_multiply_01_bad();");
	CWE190_Integer_Overflow__int_max_multiply_01_bad();


	printLine("Calling CWE190_Integer_Overflow__int_max_multiply_54_bad();");
	CWE190_Integer_Overflow__int_max_multiply_54_bad();


	printLine("Calling CWE190_Integer_Overflow__int_max_square_01_bad();");
	CWE190_Integer_Overflow__int_max_square_01_bad();


	printLine("Calling CWE190_Integer_Overflow__int_max_square_54_bad();");
	CWE190_Integer_Overflow__int_max_square_54_bad();
#endif /* OMITBAD */

	return 0;

} 
