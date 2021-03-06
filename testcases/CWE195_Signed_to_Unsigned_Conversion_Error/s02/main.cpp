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
	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_malloc_01_good();");
	CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_malloc_01_good();

	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_malloc_02_good();");
	CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_malloc_02_good();

	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_memcpy_01_good();");
	CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_memcpy_01_good();

	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_memcpy_03_good();");
	CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_memcpy_03_good();


	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_memmove_01_good();");
	CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_memmove_01_good();


	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_memmove_04_good();");
	CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_memmove_04_good();


	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_strncpy_01_good();");
	CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_strncpy_01_good();

	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_strncpy_05_good();");
	CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_strncpy_05_good();


	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__negative_malloc_01_good();");
	CWE195_Signed_to_Unsigned_Conversion_Error__negative_malloc_01_good();


	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__negative_malloc_06_good();");
	CWE195_Signed_to_Unsigned_Conversion_Error__negative_malloc_06_good();


	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__negative_memcpy_01_good();");
	CWE195_Signed_to_Unsigned_Conversion_Error__negative_memcpy_01_good();


	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__negative_memcpy_07_good();");
	CWE195_Signed_to_Unsigned_Conversion_Error__negative_memcpy_07_good();


	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__negative_memmove_01_good();");
	CWE195_Signed_to_Unsigned_Conversion_Error__negative_memmove_01_good();


	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__negative_memmove_08_good();");
	CWE195_Signed_to_Unsigned_Conversion_Error__negative_memmove_08_good();


	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__negative_strncpy_01_good();");
	CWE195_Signed_to_Unsigned_Conversion_Error__negative_strncpy_01_good();

	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__negative_strncpy_09_good();");
	CWE195_Signed_to_Unsigned_Conversion_Error__negative_strncpy_09_good();


	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__rand_malloc_01_good();");
	CWE195_Signed_to_Unsigned_Conversion_Error__rand_malloc_01_good();


	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__rand_malloc_10_good();");
	CWE195_Signed_to_Unsigned_Conversion_Error__rand_malloc_10_good();


	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__rand_memcpy_01_good();");
	CWE195_Signed_to_Unsigned_Conversion_Error__rand_memcpy_01_good();

	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__rand_memcpy_11_good();");
	CWE195_Signed_to_Unsigned_Conversion_Error__rand_memcpy_11_good();


	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__rand_memmove_01_good();");
	CWE195_Signed_to_Unsigned_Conversion_Error__rand_memmove_01_good();


	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__rand_memmove_12_good();");
	CWE195_Signed_to_Unsigned_Conversion_Error__rand_memmove_12_good();


	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__rand_strncpy_01_good();");
	CWE195_Signed_to_Unsigned_Conversion_Error__rand_strncpy_01_good();


	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__rand_strncpy_13_good();");
	CWE195_Signed_to_Unsigned_Conversion_Error__rand_strncpy_13_good();


	/* END-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */



#endif /* OMITGOOD */

#ifndef OMITBAD

	/* Calling C bad functions */
	/* BEGIN-AUTOGENERATED-C-BAD-FUNCTION-CALLS */

	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_malloc_01_bad();");
	CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_malloc_01_bad();

	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_malloc_02_bad();");
	CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_malloc_02_bad();

	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_memcpy_01_bad();");
	CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_memcpy_01_bad();

	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_memcpy_03_bad();");
	CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_memcpy_03_bad();


	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_memmove_01_bad();");
	CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_memmove_01_bad();


	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_memmove_04_bad();");
	CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_memmove_04_bad();


	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_strncpy_01_bad();");
	CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_strncpy_01_bad();

	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_strncpy_05_bad();");
	CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_strncpy_05_bad();


	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__negative_malloc_01_bad();");
	CWE195_Signed_to_Unsigned_Conversion_Error__negative_malloc_01_bad();


	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__negative_malloc_06_bad();");
	CWE195_Signed_to_Unsigned_Conversion_Error__negative_malloc_06_bad();


	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__negative_memcpy_01_bad();");
	CWE195_Signed_to_Unsigned_Conversion_Error__negative_memcpy_01_bad();


	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__negative_memcpy_07_bad();");
	CWE195_Signed_to_Unsigned_Conversion_Error__negative_memcpy_07_bad();


	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__negative_memmove_01_bad();");
	CWE195_Signed_to_Unsigned_Conversion_Error__negative_memmove_01_bad();


	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__negative_memmove_08_bad();");
	CWE195_Signed_to_Unsigned_Conversion_Error__negative_memmove_08_bad();


	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__negative_strncpy_01_bad();");
	CWE195_Signed_to_Unsigned_Conversion_Error__negative_strncpy_01_bad();

	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__negative_strncpy_09_bad();");
	CWE195_Signed_to_Unsigned_Conversion_Error__negative_strncpy_09_bad();


	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__rand_malloc_01_bad();");
	CWE195_Signed_to_Unsigned_Conversion_Error__rand_malloc_01_bad();


	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__rand_malloc_10_bad();");
	CWE195_Signed_to_Unsigned_Conversion_Error__rand_malloc_10_bad();


	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__rand_memcpy_01_bad();");
	CWE195_Signed_to_Unsigned_Conversion_Error__rand_memcpy_01_bad();

	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__rand_memcpy_11_bad();");
	CWE195_Signed_to_Unsigned_Conversion_Error__rand_memcpy_11_bad();


	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__rand_memmove_01_bad();");
	CWE195_Signed_to_Unsigned_Conversion_Error__rand_memmove_01_bad();


	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__rand_memmove_12_bad();");
	CWE195_Signed_to_Unsigned_Conversion_Error__rand_memmove_12_bad();


	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__rand_strncpy_01_bad();");
	CWE195_Signed_to_Unsigned_Conversion_Error__rand_strncpy_01_bad();


	printLine("Calling CWE195_Signed_to_Unsigned_Conversion_Error__rand_strncpy_13_bad();");
	CWE195_Signed_to_Unsigned_Conversion_Error__rand_strncpy_13_bad();
#endif /* OMITBAD */

	return 0;

} 
