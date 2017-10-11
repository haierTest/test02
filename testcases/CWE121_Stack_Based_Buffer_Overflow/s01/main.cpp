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
	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__char_type_overrun_memcpy_01_good();");
	CWE121_Stack_Based_Buffer_Overflow__char_type_overrun_memcpy_01_good();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__char_type_overrun_memmove_01_good();");
	CWE121_Stack_Based_Buffer_Overflow__char_type_overrun_memmove_01_good();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE129_connect_socket_01_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE129_connect_socket_01_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE129_connect_socket_22_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE129_connect_socket_22_good();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE129_fgets_01_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE129_fgets_01_good();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE129_fgets_22_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE129_fgets_22_good();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE129_fscanf_01_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE129_fscanf_01_good();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE129_large_01_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE129_large_01_good();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE129_listen_socket_01_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE129_listen_socket_01_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE129_rand_01_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE129_rand_01_good();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE131_loop_01_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE131_loop_01_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_01_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_01_good();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_01_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_01_good();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE135_01_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE135_01_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_01_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_01_good();


	/* END-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */







#endif /* OMITGOOD */

#ifndef OMITBAD

	/* Calling C bad functions */
	/* BEGIN-AUTOGENERATED-C-BAD-FUNCTION-CALLS */
	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__char_type_overrun_memcpy_01_bad();");
	CWE121_Stack_Based_Buffer_Overflow__char_type_overrun_memcpy_01_bad();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__char_type_overrun_memmove_01_bad();");
	CWE121_Stack_Based_Buffer_Overflow__char_type_overrun_memmove_01_bad();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE129_connect_socket_01_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE129_connect_socket_01_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE129_connect_socket_22_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE129_connect_socket_22_bad();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE129_fgets_01_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE129_fgets_01_bad();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE129_fgets_22_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE129_fgets_22_bad();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE129_fscanf_01_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE129_fscanf_01_bad();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE129_large_01_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE129_large_01_bad();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE129_listen_socket_01_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE129_listen_socket_01_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE129_rand_01_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE129_rand_01_bad();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE131_loop_01_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE131_loop_01_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_01_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_01_bad();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_01_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_01_bad();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE135_01_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE135_01_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_01_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_01_bad();

#endif /* OMITBAD */

	return 0;

} 