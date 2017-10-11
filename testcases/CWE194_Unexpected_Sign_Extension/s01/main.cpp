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
	printLine("Calling CWE194_Unexpected_Sign_Extension__connect_socket_malloc_01_good();");
	CWE194_Unexpected_Sign_Extension__connect_socket_malloc_01_good();

	printLine("Calling CWE194_Unexpected_Sign_Extension__connect_socket_malloc_22_good();");
	CWE194_Unexpected_Sign_Extension__connect_socket_malloc_22_good();


	printLine("Calling CWE194_Unexpected_Sign_Extension__connect_socket_memcpy_01_good();");
	CWE194_Unexpected_Sign_Extension__connect_socket_memcpy_01_good();


	printLine("Calling CWE194_Unexpected_Sign_Extension__connect_socket_memcpy_22_good();");
	CWE194_Unexpected_Sign_Extension__connect_socket_memcpy_22_good();


	printLine("Calling CWE194_Unexpected_Sign_Extension__connect_socket_memmove_01_good();");
	CWE194_Unexpected_Sign_Extension__connect_socket_memmove_01_good();


	printLine("Calling CWE194_Unexpected_Sign_Extension__connect_socket_memmove_22_good();");
	CWE194_Unexpected_Sign_Extension__connect_socket_memmove_22_good();


	printLine("Calling CWE194_Unexpected_Sign_Extension__connect_socket_strncpy_01_good();");
	CWE194_Unexpected_Sign_Extension__connect_socket_strncpy_01_good();


	printLine("Calling CWE194_Unexpected_Sign_Extension__connect_socket_strncpy_22_good();");
	CWE194_Unexpected_Sign_Extension__connect_socket_strncpy_22_good();


	printLine("Calling CWE194_Unexpected_Sign_Extension__fgets_malloc_01_good();");
	CWE194_Unexpected_Sign_Extension__fgets_malloc_01_good();

	printLine("Calling CWE194_Unexpected_Sign_Extension__fgets_malloc_22_good();");
	CWE194_Unexpected_Sign_Extension__fgets_malloc_22_good();


	printLine("Calling CWE194_Unexpected_Sign_Extension__fgets_memcpy_01_good();");
	CWE194_Unexpected_Sign_Extension__fgets_memcpy_01_good();


	printLine("Calling CWE194_Unexpected_Sign_Extension__fgets_memcpy_22_good();");
	CWE194_Unexpected_Sign_Extension__fgets_memcpy_22_good();


	printLine("Calling CWE194_Unexpected_Sign_Extension__fgets_memmove_01_good();");
	CWE194_Unexpected_Sign_Extension__fgets_memmove_01_good();

	printLine("Calling CWE194_Unexpected_Sign_Extension__fgets_memmove_22_good();");
	CWE194_Unexpected_Sign_Extension__fgets_memmove_22_good();

	printLine("Calling CWE194_Unexpected_Sign_Extension__fgets_strncpy_01_good();");
	CWE194_Unexpected_Sign_Extension__fgets_strncpy_01_good();


	printLine("Calling CWE194_Unexpected_Sign_Extension__fgets_strncpy_22_good();");
	CWE194_Unexpected_Sign_Extension__fgets_strncpy_22_good();


	printLine("Calling CWE194_Unexpected_Sign_Extension__fscanf_malloc_01_good();");
	CWE194_Unexpected_Sign_Extension__fscanf_malloc_01_good();

	printLine("Calling CWE194_Unexpected_Sign_Extension__fscanf_malloc_22_good();");
	CWE194_Unexpected_Sign_Extension__fscanf_malloc_22_good();

	printLine("Calling CWE194_Unexpected_Sign_Extension__fscanf_memcpy_01_good();");
	CWE194_Unexpected_Sign_Extension__fscanf_memcpy_01_good();


	printLine("Calling CWE194_Unexpected_Sign_Extension__fscanf_memcpy_22_good();");
	CWE194_Unexpected_Sign_Extension__fscanf_memcpy_22_good();


	printLine("Calling CWE194_Unexpected_Sign_Extension__fscanf_memmove_01_good();");
	CWE194_Unexpected_Sign_Extension__fscanf_memmove_01_good();


	printLine("Calling CWE194_Unexpected_Sign_Extension__fscanf_memmove_22_good();");
	CWE194_Unexpected_Sign_Extension__fscanf_memmove_22_good();

	printLine("Calling CWE194_Unexpected_Sign_Extension__fscanf_strncpy_01_good();");
	CWE194_Unexpected_Sign_Extension__fscanf_strncpy_01_good();


	printLine("Calling CWE194_Unexpected_Sign_Extension__fscanf_strncpy_22_good();");
	CWE194_Unexpected_Sign_Extension__fscanf_strncpy_22_good();


	/* END-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */



#endif /* OMITGOOD */

#ifndef OMITBAD

	/* Calling C bad functions */
	/* BEGIN-AUTOGENERATED-C-BAD-FUNCTION-CALLS */
	printLine("Calling CWE194_Unexpected_Sign_Extension__connect_socket_malloc_01_bad();");
	CWE194_Unexpected_Sign_Extension__connect_socket_malloc_01_bad();

	printLine("Calling CWE194_Unexpected_Sign_Extension__connect_socket_malloc_22_bad();");
	CWE194_Unexpected_Sign_Extension__connect_socket_malloc_22_bad();


	printLine("Calling CWE194_Unexpected_Sign_Extension__connect_socket_memcpy_01_bad();");
	CWE194_Unexpected_Sign_Extension__connect_socket_memcpy_01_bad();


	printLine("Calling CWE194_Unexpected_Sign_Extension__connect_socket_memcpy_22_bad();");
	CWE194_Unexpected_Sign_Extension__connect_socket_memcpy_22_bad();


	printLine("Calling CWE194_Unexpected_Sign_Extension__connect_socket_memmove_01_bad();");
	CWE194_Unexpected_Sign_Extension__connect_socket_memmove_01_bad();


	printLine("Calling CWE194_Unexpected_Sign_Extension__connect_socket_memmove_22_bad();");
	CWE194_Unexpected_Sign_Extension__connect_socket_memmove_22_bad();


	printLine("Calling CWE194_Unexpected_Sign_Extension__connect_socket_strncpy_01_bad();");
	CWE194_Unexpected_Sign_Extension__connect_socket_strncpy_01_bad();


	printLine("Calling CWE194_Unexpected_Sign_Extension__connect_socket_strncpy_22_bad();");
	CWE194_Unexpected_Sign_Extension__connect_socket_strncpy_22_bad();


	printLine("Calling CWE194_Unexpected_Sign_Extension__fgets_malloc_01_bad();");
	CWE194_Unexpected_Sign_Extension__fgets_malloc_01_bad();

	printLine("Calling CWE194_Unexpected_Sign_Extension__fgets_malloc_22_bad();");
	CWE194_Unexpected_Sign_Extension__fgets_malloc_22_bad();


	printLine("Calling CWE194_Unexpected_Sign_Extension__fgets_memcpy_01_bad();");
	CWE194_Unexpected_Sign_Extension__fgets_memcpy_01_bad();


	printLine("Calling CWE194_Unexpected_Sign_Extension__fgets_memcpy_22_bad();");
	CWE194_Unexpected_Sign_Extension__fgets_memcpy_22_bad();


	printLine("Calling CWE194_Unexpected_Sign_Extension__fgets_memmove_01_bad();");
	CWE194_Unexpected_Sign_Extension__fgets_memmove_01_bad();

	printLine("Calling CWE194_Unexpected_Sign_Extension__fgets_memmove_22_bad();");
	CWE194_Unexpected_Sign_Extension__fgets_memmove_22_bad();

	printLine("Calling CWE194_Unexpected_Sign_Extension__fgets_strncpy_01_bad();");
	CWE194_Unexpected_Sign_Extension__fgets_strncpy_01_bad();


	printLine("Calling CWE194_Unexpected_Sign_Extension__fgets_strncpy_22_bad();");
	CWE194_Unexpected_Sign_Extension__fgets_strncpy_22_bad();


	printLine("Calling CWE194_Unexpected_Sign_Extension__fscanf_malloc_01_bad();");
	CWE194_Unexpected_Sign_Extension__fscanf_malloc_01_bad();

	printLine("Calling CWE194_Unexpected_Sign_Extension__fscanf_malloc_22_bad();");
	CWE194_Unexpected_Sign_Extension__fscanf_malloc_22_bad();

	printLine("Calling CWE194_Unexpected_Sign_Extension__fscanf_memcpy_01_bad();");
	CWE194_Unexpected_Sign_Extension__fscanf_memcpy_01_bad();


	printLine("Calling CWE194_Unexpected_Sign_Extension__fscanf_memcpy_22_bad();");
	CWE194_Unexpected_Sign_Extension__fscanf_memcpy_22_bad();


	printLine("Calling CWE194_Unexpected_Sign_Extension__fscanf_memmove_01_bad();");
	CWE194_Unexpected_Sign_Extension__fscanf_memmove_01_bad();


	printLine("Calling CWE194_Unexpected_Sign_Extension__fscanf_memmove_22_bad();");
	CWE194_Unexpected_Sign_Extension__fscanf_memmove_22_bad();

	printLine("Calling CWE194_Unexpected_Sign_Extension__fscanf_strncpy_01_bad();");
	CWE194_Unexpected_Sign_Extension__fscanf_strncpy_01_bad();


	printLine("Calling CWE194_Unexpected_Sign_Extension__fscanf_strncpy_22_bad();");
	CWE194_Unexpected_Sign_Extension__fscanf_strncpy_22_bad();


#endif /* OMITBAD */

	return 0;

} 
