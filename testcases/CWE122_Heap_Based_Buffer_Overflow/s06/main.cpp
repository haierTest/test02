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
	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_01_good();");
	CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_01_good();

	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_22_good();");
	CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_22_good();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__CWE135_01_good();");
	CWE122_Heap_Based_Buffer_Overflow__CWE135_01_good();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__CWE135_22_good();");
	CWE122_Heap_Based_Buffer_Overflow__CWE135_22_good();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_01_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_01_good();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_22_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_22_good();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fgets_01_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fgets_01_good();

	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fgets_22_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fgets_22_good();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_01_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_01_good();

	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_22_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_22_good();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_01_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_01_good();

	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_good();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_01_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_01_good();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_22_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_22_good();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_01_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_01_good();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_22_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_22_good();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_01_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_01_good();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_22_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_22_good();

	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_01_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_01_good();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_22_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_22_good();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_01_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_01_good();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_22_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_22_good();

	/* END-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */


#endif /* OMITGOOD */

#ifndef OMITBAD

	/* Calling C bad functions */
	/* BEGIN-AUTOGENERATED-C-BAD-FUNCTION-CALLS */
	
	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_01_bad();");
	CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_01_bad();

	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_22_bad();");
	CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_22_bad();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__CWE135_01_bad();");
	CWE122_Heap_Based_Buffer_Overflow__CWE135_01_bad();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__CWE135_22_bad();");
	CWE122_Heap_Based_Buffer_Overflow__CWE135_22_bad();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_01_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_01_bad();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_22_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_22_bad();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fgets_01_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fgets_01_bad();

	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fgets_22_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fgets_22_bad();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_01_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_01_bad();

	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_22_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_22_bad();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_01_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_01_bad();

	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_bad();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_01_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_01_bad();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_22_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_22_bad();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_01_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_01_bad();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_22_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_22_bad();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_01_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_01_bad();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_22_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_22_bad();

	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_01_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_01_bad();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_22_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_22_bad();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_01_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_01_bad();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_22_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_22_bad();
#endif /* OMITBAD */

	return 0;

} 