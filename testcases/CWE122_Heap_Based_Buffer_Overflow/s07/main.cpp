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
	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memmove_01_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memmove_01_good();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memmove_22_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memmove_22_good();

	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_ncpy_01_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_ncpy_01_good();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_ncpy_22_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_ncpy_22_good();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_cpy_01_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_cpy_01_good();

	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_cpy_22_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_cpy_22_good();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_loop_01_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_loop_01_good();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_loop_22_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_loop_22_good();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memcpy_01_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memcpy_01_good();

	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memcpy_22_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memcpy_22_good();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memmove_01_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memmove_01_good();

	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memmove_22_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memmove_22_good();

	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_ncpy_01_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_ncpy_01_good();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_ncpy_22_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_ncpy_22_good();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_01_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_01_good();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_22_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_22_good();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memcpy_01_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memcpy_01_good();

	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memcpy_22_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memcpy_22_good();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memmove_01_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memmove_01_good();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memmove_22_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memmove_22_good();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncat_01_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncat_01_good();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncat_22_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncat_22_good();

	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_01_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_01_good();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_22_good();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_22_good();


	/* END-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */



#endif /* OMITGOOD */

#ifndef OMITBAD

	/* Calling C bad functions */
	/* BEGIN-AUTOGENERATED-C-BAD-FUNCTION-CALLS */
	
	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memmove_01_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memmove_01_bad();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memmove_22_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memmove_22_bad();

	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_ncpy_01_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_ncpy_01_bad();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_ncpy_22_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_ncpy_22_bad();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_cpy_01_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_cpy_01_bad();

	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_cpy_22_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_cpy_22_bad();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_loop_01_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_loop_01_bad();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_loop_22_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_loop_22_bad();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memcpy_01_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memcpy_01_bad();

	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memcpy_22_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memcpy_22_bad();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memmove_01_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memmove_01_bad();

	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memmove_22_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memmove_22_bad();

	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_ncpy_01_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_ncpy_01_bad();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_ncpy_22_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_ncpy_22_bad();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_01_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_01_bad();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_22_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_22_bad();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memcpy_01_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memcpy_01_bad();

	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memcpy_22_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memcpy_22_bad();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memmove_01_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memmove_01_bad();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memmove_22_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memmove_22_bad();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncat_01_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncat_01_bad();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncat_22_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncat_22_bad();

	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_01_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_01_bad();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_22_bad();");
	CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_22_bad();
#endif /* OMITBAD */

	return 0;

} 
