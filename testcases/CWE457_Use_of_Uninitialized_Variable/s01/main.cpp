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
	printLine("Calling CWE457_Use_of_Uninitialized_Variable__char_pointer_01_good();");
	CWE457_Use_of_Uninitialized_Variable__char_pointer_01_good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__char_pointer_07_good();");
	CWE457_Use_of_Uninitialized_Variable__char_pointer_07_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__double_01_good();");
	CWE457_Use_of_Uninitialized_Variable__double_01_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__double_07_good();");
	CWE457_Use_of_Uninitialized_Variable__double_07_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__double_array_alloca_no_init_01_good();");
	CWE457_Use_of_Uninitialized_Variable__double_array_alloca_no_init_01_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__double_array_alloca_no_init_07_good();");
	CWE457_Use_of_Uninitialized_Variable__double_array_alloca_no_init_07_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__double_array_alloca_partial_init_01_good();");
	CWE457_Use_of_Uninitialized_Variable__double_array_alloca_partial_init_01_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__double_array_alloca_partial_init_07_good();");
	CWE457_Use_of_Uninitialized_Variable__double_array_alloca_partial_init_07_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__double_array_declare_no_init_01_good();");
	CWE457_Use_of_Uninitialized_Variable__double_array_declare_no_init_01_good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__double_array_declare_no_init_07_good();");
	CWE457_Use_of_Uninitialized_Variable__double_array_declare_no_init_07_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__double_array_declare_partial_init_01_good();");
	CWE457_Use_of_Uninitialized_Variable__double_array_declare_partial_init_01_good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__double_array_declare_partial_init_07_good();");
	CWE457_Use_of_Uninitialized_Variable__double_array_declare_partial_init_07_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__double_array_malloc_no_init_01_good();");
	CWE457_Use_of_Uninitialized_Variable__double_array_malloc_no_init_01_good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__double_array_malloc_no_init_07_good();");
	CWE457_Use_of_Uninitialized_Variable__double_array_malloc_no_init_07_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__double_array_malloc_partial_init_01_good();");
	CWE457_Use_of_Uninitialized_Variable__double_array_malloc_partial_init_01_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__double_array_malloc_partial_init_07_good();");
	CWE457_Use_of_Uninitialized_Variable__double_array_malloc_partial_init_07_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__double_pointer_01_good();");
	CWE457_Use_of_Uninitialized_Variable__double_pointer_01_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__double_pointer_07_good();");
	CWE457_Use_of_Uninitialized_Variable__double_pointer_07_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__int64_t_01_good();");
	CWE457_Use_of_Uninitialized_Variable__int64_t_01_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__int64_t_07_good();");
	CWE457_Use_of_Uninitialized_Variable__int64_t_07_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__int_01_good();");
	CWE457_Use_of_Uninitialized_Variable__int_01_good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__int_07_good();");
	CWE457_Use_of_Uninitialized_Variable__int_07_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__int_array_alloca_no_init_01_good();");
	CWE457_Use_of_Uninitialized_Variable__int_array_alloca_no_init_01_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__int_array_alloca_no_init_07_good();");
	CWE457_Use_of_Uninitialized_Variable__int_array_alloca_no_init_07_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__int_array_alloca_partial_init_01_good();");
	CWE457_Use_of_Uninitialized_Variable__int_array_alloca_partial_init_01_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__int_array_alloca_partial_init_07_good();");
	CWE457_Use_of_Uninitialized_Variable__int_array_alloca_partial_init_07_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__int_array_declare_no_init_01_good();");
	CWE457_Use_of_Uninitialized_Variable__int_array_declare_no_init_01_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__int_array_declare_no_init_07_good();");
	CWE457_Use_of_Uninitialized_Variable__int_array_declare_no_init_07_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__int_array_declare_partial_init_01_good();");
	CWE457_Use_of_Uninitialized_Variable__int_array_declare_partial_init_01_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__int_array_declare_partial_init_07_good();");
	CWE457_Use_of_Uninitialized_Variable__int_array_declare_partial_init_07_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__int_array_malloc_no_init_01_good();");
	CWE457_Use_of_Uninitialized_Variable__int_array_malloc_no_init_01_good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__int_array_malloc_no_init_07_good();");
	CWE457_Use_of_Uninitialized_Variable__int_array_malloc_no_init_07_good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__int_array_malloc_partial_init_01_good();");
	CWE457_Use_of_Uninitialized_Variable__int_array_malloc_partial_init_01_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__int_array_malloc_partial_init_07_good();");
	CWE457_Use_of_Uninitialized_Variable__int_array_malloc_partial_init_07_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__int_pointer_01_good();");
	CWE457_Use_of_Uninitialized_Variable__int_pointer_01_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__int_pointer_07_good();");
	CWE457_Use_of_Uninitialized_Variable__int_pointer_07_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__long_01_good();");
	CWE457_Use_of_Uninitialized_Variable__long_01_good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__long_07_good();");
	CWE457_Use_of_Uninitialized_Variable__long_07_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__struct_01_good();");
	CWE457_Use_of_Uninitialized_Variable__struct_01_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__struct_07_good();");
	CWE457_Use_of_Uninitialized_Variable__struct_07_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__struct_array_alloca_no_init_01_good();");
	CWE457_Use_of_Uninitialized_Variable__struct_array_alloca_no_init_01_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__struct_array_alloca_no_init_07_good();");
	CWE457_Use_of_Uninitialized_Variable__struct_array_alloca_no_init_07_good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__struct_array_alloca_partial_init_01_good();");
	CWE457_Use_of_Uninitialized_Variable__struct_array_alloca_partial_init_01_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__struct_array_alloca_partial_init_07_good();");
	CWE457_Use_of_Uninitialized_Variable__struct_array_alloca_partial_init_07_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__struct_array_declare_no_init_01_good();");
	CWE457_Use_of_Uninitialized_Variable__struct_array_declare_no_init_01_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__struct_array_declare_no_init_07_good();");
	CWE457_Use_of_Uninitialized_Variable__struct_array_declare_no_init_07_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__struct_array_declare_partial_init_01_good();");
	CWE457_Use_of_Uninitialized_Variable__struct_array_declare_partial_init_01_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__struct_array_declare_partial_init_07_good();");
	CWE457_Use_of_Uninitialized_Variable__struct_array_declare_partial_init_07_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__struct_array_malloc_no_init_01_good();");
	CWE457_Use_of_Uninitialized_Variable__struct_array_malloc_no_init_01_good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__struct_array_malloc_no_init_07_good();");
	CWE457_Use_of_Uninitialized_Variable__struct_array_malloc_no_init_07_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__struct_array_malloc_partial_init_01_good();");
	CWE457_Use_of_Uninitialized_Variable__struct_array_malloc_partial_init_01_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__struct_array_malloc_partial_init_07_good();");
	CWE457_Use_of_Uninitialized_Variable__struct_array_malloc_partial_init_07_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__struct_pointer_01_good();");
	CWE457_Use_of_Uninitialized_Variable__struct_pointer_01_good();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__struct_pointer_07_good();");
	CWE457_Use_of_Uninitialized_Variable__struct_pointer_07_good();


	/* END-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */



#endif /* OMITGOOD */

#ifndef OMITBAD

	/* Calling C bad functions */
	/* BEGIN-AUTOGENERATED-C-BAD-FUNCTION-CALLS */

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__char_pointer_01_bad();");
	CWE457_Use_of_Uninitialized_Variable__char_pointer_01_bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__char_pointer_07_bad();");
	CWE457_Use_of_Uninitialized_Variable__char_pointer_07_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__double_01_bad();");
	CWE457_Use_of_Uninitialized_Variable__double_01_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__double_07_bad();");
	CWE457_Use_of_Uninitialized_Variable__double_07_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__double_array_alloca_no_init_01_bad();");
	CWE457_Use_of_Uninitialized_Variable__double_array_alloca_no_init_01_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__double_array_alloca_no_init_07_bad();");
	CWE457_Use_of_Uninitialized_Variable__double_array_alloca_no_init_07_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__double_array_alloca_partial_init_01_bad();");
	CWE457_Use_of_Uninitialized_Variable__double_array_alloca_partial_init_01_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__double_array_alloca_partial_init_07_bad();");
	CWE457_Use_of_Uninitialized_Variable__double_array_alloca_partial_init_07_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__double_array_declare_no_init_01_bad();");
	CWE457_Use_of_Uninitialized_Variable__double_array_declare_no_init_01_bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__double_array_declare_no_init_07_bad();");
	CWE457_Use_of_Uninitialized_Variable__double_array_declare_no_init_07_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__double_array_declare_partial_init_01_bad();");
	CWE457_Use_of_Uninitialized_Variable__double_array_declare_partial_init_01_bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__double_array_declare_partial_init_07_bad();");
	CWE457_Use_of_Uninitialized_Variable__double_array_declare_partial_init_07_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__double_array_malloc_no_init_01_bad();");
	CWE457_Use_of_Uninitialized_Variable__double_array_malloc_no_init_01_bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__double_array_malloc_no_init_07_bad();");
	CWE457_Use_of_Uninitialized_Variable__double_array_malloc_no_init_07_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__double_array_malloc_partial_init_01_bad();");
	CWE457_Use_of_Uninitialized_Variable__double_array_malloc_partial_init_01_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__double_array_malloc_partial_init_07_bad();");
	CWE457_Use_of_Uninitialized_Variable__double_array_malloc_partial_init_07_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__double_pointer_01_bad();");
	CWE457_Use_of_Uninitialized_Variable__double_pointer_01_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__double_pointer_07_bad();");
	CWE457_Use_of_Uninitialized_Variable__double_pointer_07_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__int64_t_01_bad();");
	CWE457_Use_of_Uninitialized_Variable__int64_t_01_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__int64_t_07_bad();");
	CWE457_Use_of_Uninitialized_Variable__int64_t_07_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__int_01_bad();");
	CWE457_Use_of_Uninitialized_Variable__int_01_bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__int_07_bad();");
	CWE457_Use_of_Uninitialized_Variable__int_07_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__int_array_alloca_no_init_01_bad();");
	CWE457_Use_of_Uninitialized_Variable__int_array_alloca_no_init_01_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__int_array_alloca_no_init_07_bad();");
	CWE457_Use_of_Uninitialized_Variable__int_array_alloca_no_init_07_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__int_array_alloca_partial_init_01_bad();");
	CWE457_Use_of_Uninitialized_Variable__int_array_alloca_partial_init_01_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__int_array_alloca_partial_init_07_bad();");
	CWE457_Use_of_Uninitialized_Variable__int_array_alloca_partial_init_07_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__int_array_declare_no_init_01_bad();");
	CWE457_Use_of_Uninitialized_Variable__int_array_declare_no_init_01_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__int_array_declare_no_init_07_bad();");
	CWE457_Use_of_Uninitialized_Variable__int_array_declare_no_init_07_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__int_array_declare_partial_init_01_bad();");
	CWE457_Use_of_Uninitialized_Variable__int_array_declare_partial_init_01_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__int_array_declare_partial_init_07_bad();");
	CWE457_Use_of_Uninitialized_Variable__int_array_declare_partial_init_07_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__int_array_malloc_no_init_01_bad();");
	CWE457_Use_of_Uninitialized_Variable__int_array_malloc_no_init_01_bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__int_array_malloc_no_init_07_bad();");
	CWE457_Use_of_Uninitialized_Variable__int_array_malloc_no_init_07_bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__int_array_malloc_partial_init_01_bad();");
	CWE457_Use_of_Uninitialized_Variable__int_array_malloc_partial_init_01_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__int_array_malloc_partial_init_07_bad();");
	CWE457_Use_of_Uninitialized_Variable__int_array_malloc_partial_init_07_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__int_pointer_01_bad();");
	CWE457_Use_of_Uninitialized_Variable__int_pointer_01_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__int_pointer_07_bad();");
	CWE457_Use_of_Uninitialized_Variable__int_pointer_07_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__long_01_bad();");
	CWE457_Use_of_Uninitialized_Variable__long_01_bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__long_07_bad();");
	CWE457_Use_of_Uninitialized_Variable__long_07_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__struct_01_bad();");
	CWE457_Use_of_Uninitialized_Variable__struct_01_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__struct_07_bad();");
	CWE457_Use_of_Uninitialized_Variable__struct_07_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__struct_array_alloca_no_init_01_bad();");
	CWE457_Use_of_Uninitialized_Variable__struct_array_alloca_no_init_01_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__struct_array_alloca_no_init_07_bad();");
	CWE457_Use_of_Uninitialized_Variable__struct_array_alloca_no_init_07_bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__struct_array_alloca_partial_init_01_bad();");
	CWE457_Use_of_Uninitialized_Variable__struct_array_alloca_partial_init_01_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__struct_array_alloca_partial_init_07_bad();");
	CWE457_Use_of_Uninitialized_Variable__struct_array_alloca_partial_init_07_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__struct_array_declare_no_init_01_bad();");
	CWE457_Use_of_Uninitialized_Variable__struct_array_declare_no_init_01_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__struct_array_declare_no_init_07_bad();");
	CWE457_Use_of_Uninitialized_Variable__struct_array_declare_no_init_07_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__struct_array_declare_partial_init_01_bad();");
	CWE457_Use_of_Uninitialized_Variable__struct_array_declare_partial_init_01_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__struct_array_declare_partial_init_07_bad();");
	CWE457_Use_of_Uninitialized_Variable__struct_array_declare_partial_init_07_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__struct_array_malloc_no_init_01_bad();");
	CWE457_Use_of_Uninitialized_Variable__struct_array_malloc_no_init_01_bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__struct_array_malloc_no_init_07_bad();");
	CWE457_Use_of_Uninitialized_Variable__struct_array_malloc_no_init_07_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__struct_array_malloc_partial_init_01_bad();");
	CWE457_Use_of_Uninitialized_Variable__struct_array_malloc_partial_init_01_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__struct_array_malloc_partial_init_07_bad();");
	CWE457_Use_of_Uninitialized_Variable__struct_array_malloc_partial_init_07_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__struct_pointer_01_bad();");
	CWE457_Use_of_Uninitialized_Variable__struct_pointer_01_bad();


	printLine("Calling CWE457_Use_of_Uninitialized_Variable__struct_pointer_07_bad();");
	CWE457_Use_of_Uninitialized_Variable__struct_pointer_07_bad();
#endif /* OMITBAD */

	return 0;

} 
