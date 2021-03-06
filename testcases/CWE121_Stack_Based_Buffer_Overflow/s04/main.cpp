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
	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_snprintf_01_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_snprintf_01_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_snprintf_52_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_snprintf_52_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_loop_01_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_loop_01_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_loop_52_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_loop_52_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memcpy_01_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memcpy_01_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memcpy_52_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memcpy_52_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memmove_01_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memmove_01_good();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memmove_52_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memmove_52_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_loop_01_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_loop_01_good();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_loop_52_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_loop_52_good();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_memcpy_01_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_memcpy_01_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_memcpy_52_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_memcpy_52_good();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_memmove_01_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_memmove_01_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_memmove_52_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_memmove_52_good();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_loop_01_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_loop_01_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_loop_52_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_loop_52_good();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memcpy_01_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memcpy_01_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memcpy_52_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memcpy_52_good();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memmove_01_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memmove_01_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memmove_52_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memmove_52_good();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_loop_01_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_loop_01_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_loop_52_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_loop_52_good();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memcpy_01_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memcpy_01_good();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memcpy_52_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memcpy_52_good();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memmove_01_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memmove_01_good();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memmove_52_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memmove_52_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_loop_01_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_loop_01_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_loop_52_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_loop_52_good();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memcpy_01_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memcpy_01_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memcpy_52_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memcpy_52_good();


	/* END-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */


#endif /* OMITGOOD */

#ifndef OMITBAD

	/* Calling C bad functions */
	/* BEGIN-AUTOGENERATED-C-BAD-FUNCTION-CALLS */
	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_snprintf_01_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_snprintf_01_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_snprintf_52_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_snprintf_52_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_loop_01_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_loop_01_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_loop_52_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_loop_52_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memcpy_01_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memcpy_01_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memcpy_52_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memcpy_52_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memmove_01_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memmove_01_bad();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memmove_52_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memmove_52_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_loop_01_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_loop_01_bad();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_loop_52_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_loop_52_bad();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_memcpy_01_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_memcpy_01_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_memcpy_52_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_memcpy_52_bad();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_memmove_01_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_memmove_01_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_memmove_52_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_memmove_52_bad();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_loop_01_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_loop_01_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_loop_52_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_loop_52_bad();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memcpy_01_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memcpy_01_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memcpy_52_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memcpy_52_bad();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memmove_01_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memmove_01_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memmove_52_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memmove_52_bad();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_loop_01_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_loop_01_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_loop_52_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_loop_52_bad();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memcpy_01_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memcpy_01_bad();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memcpy_52_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memcpy_52_bad();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memmove_01_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memmove_01_bad();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memmove_52_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memmove_52_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_loop_01_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_loop_01_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_loop_52_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_loop_52_bad();


	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memcpy_01_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memcpy_01_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memcpy_52_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memcpy_52_bad();

#endif /* OMITBAD */

	return 0;

} 
