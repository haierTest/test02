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
	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_01_good();");
	CWE122_Heap_Based_Buffer_Overflow__sizeof_double_01_good();

	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_good();");
	CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_good();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_01_good();");
	CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_01_good();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_good();");
	CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_good();

	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_01_good();");
	CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_01_good();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_good();");
	CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_good();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_01_good();");
	CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_01_good();

	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_01_good();");
	CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_01_good();

	/* END-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */

#endif /* OMITGOOD */

#ifndef OMITBAD

	/* Calling C bad functions */
	/* BEGIN-AUTOGENERATED-C-BAD-FUNCTION-CALLS */
	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_01_bad();");
	CWE122_Heap_Based_Buffer_Overflow__sizeof_double_01_bad();

	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_bad();");
	CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_bad();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_01_bad();");
	CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_01_bad();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_bad();");
	CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_bad();

	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_01_bad();");
	CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_01_bad();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_bad();");
	CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_bad();


	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_01_bad();");
	CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_01_bad();

	printLine("Calling CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_01_bad();");
	CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_01_bad();

#endif /* OMITBAD */

	return 0;

} 
