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
	printLine("Calling CWE467_Use_of_sizeof_on_Pointer_Type__char_01_good();");
	CWE467_Use_of_sizeof_on_Pointer_Type__char_01_good();


	printLine("Calling CWE467_Use_of_sizeof_on_Pointer_Type__char_18_good();");
	CWE467_Use_of_sizeof_on_Pointer_Type__char_18_good();

	printLine("Calling CWE467_Use_of_sizeof_on_Pointer_Type__int_01_good();");
	CWE467_Use_of_sizeof_on_Pointer_Type__int_01_good();


	printLine("Calling CWE467_Use_of_sizeof_on_Pointer_Type__int_18_good();");
	CWE467_Use_of_sizeof_on_Pointer_Type__int_18_good();

	printLine("Calling CWE467_Use_of_sizeof_on_Pointer_Type__short_01_good();");
	CWE467_Use_of_sizeof_on_Pointer_Type__short_01_good();


	printLine("Calling CWE467_Use_of_sizeof_on_Pointer_Type__short_18_good();");
	CWE467_Use_of_sizeof_on_Pointer_Type__short_18_good();

	/* END-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */



#endif /* OMITGOOD */

#ifndef OMITBAD

	/* Calling C bad functions */
	/* BEGIN-AUTOGENERATED-C-BAD-FUNCTION-CALLS */
	printLine("Calling CWE467_Use_of_sizeof_on_Pointer_Type__char_01_bad();");
	CWE467_Use_of_sizeof_on_Pointer_Type__char_01_bad();

	printLine("Calling CWE467_Use_of_sizeof_on_Pointer_Type__char_18_bad();");
	CWE467_Use_of_sizeof_on_Pointer_Type__char_18_bad();

	printLine("Calling CWE467_Use_of_sizeof_on_Pointer_Type__int_01_bad();");
	CWE467_Use_of_sizeof_on_Pointer_Type__int_01_bad();


	printLine("Calling CWE467_Use_of_sizeof_on_Pointer_Type__int_18_bad();");
	CWE467_Use_of_sizeof_on_Pointer_Type__int_18_bad();

	printLine("Calling CWE467_Use_of_sizeof_on_Pointer_Type__short_01_bad();");
	CWE467_Use_of_sizeof_on_Pointer_Type__short_01_bad();

	printLine("Calling CWE467_Use_of_sizeof_on_Pointer_Type__short_18_bad();");
	CWE467_Use_of_sizeof_on_Pointer_Type__short_18_bad();

	/* END-AUTOGENERATED-C-BAD-FUNCTION-CALLS */


#endif /* OMITBAD */

	return 0;

} 
