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
	printLine("Calling CWE398_Poor_Code_Quality__addition_01_good();");
	CWE398_Poor_Code_Quality__addition_01_good();


	printLine("Calling CWE398_Poor_Code_Quality__empty_block_01_good();");
	CWE398_Poor_Code_Quality__empty_block_01_good();


	printLine("Calling CWE398_Poor_Code_Quality__empty_case_01_good();");
	CWE398_Poor_Code_Quality__empty_case_01_good();


	printLine("Calling CWE398_Poor_Code_Quality__empty_else_01_good();");
	CWE398_Poor_Code_Quality__empty_else_01_good();


	printLine("Calling CWE398_Poor_Code_Quality__empty_for_01_good();");
	CWE398_Poor_Code_Quality__empty_for_01_good();


	printLine("Calling CWE398_Poor_Code_Quality__empty_function_01_good();");
	CWE398_Poor_Code_Quality__empty_function_01_good();

	printLine("Calling CWE398_Poor_Code_Quality__empty_if_01_good();");
	CWE398_Poor_Code_Quality__empty_if_01_good();


	printLine("Calling CWE398_Poor_Code_Quality__empty_while_01_good();");
	CWE398_Poor_Code_Quality__empty_while_01_good();

	printLine("Calling CWE398_Poor_Code_Quality__equals_01_good();");
	CWE398_Poor_Code_Quality__equals_01_good();


	printLine("Calling CWE398_Poor_Code_Quality__five_01_good();");
	CWE398_Poor_Code_Quality__five_01_good();


	printLine("Calling CWE398_Poor_Code_Quality__semicolon_01_good();");
	CWE398_Poor_Code_Quality__semicolon_01_good();


	/* END-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */


#endif /* OMITGOOD */

#ifndef OMITBAD

	/* Calling C bad functions */
	/* BEGIN-AUTOGENERATED-C-BAD-FUNCTION-CALLS */
	
	printLine("Calling CWE398_Poor_Code_Quality__addition_01_bad();");
	CWE398_Poor_Code_Quality__addition_01_bad();


	printLine("Calling CWE398_Poor_Code_Quality__empty_block_01_bad();");
	CWE398_Poor_Code_Quality__empty_block_01_bad();


	printLine("Calling CWE398_Poor_Code_Quality__empty_case_01_bad();");
	CWE398_Poor_Code_Quality__empty_case_01_bad();


	printLine("Calling CWE398_Poor_Code_Quality__empty_else_01_bad();");
	CWE398_Poor_Code_Quality__empty_else_01_bad();


	printLine("Calling CWE398_Poor_Code_Quality__empty_for_01_bad();");
	CWE398_Poor_Code_Quality__empty_for_01_bad();


	printLine("Calling CWE398_Poor_Code_Quality__empty_function_01_bad();");
	CWE398_Poor_Code_Quality__empty_function_01_bad();

	printLine("Calling CWE398_Poor_Code_Quality__empty_if_01_bad();");
	CWE398_Poor_Code_Quality__empty_if_01_bad();


	printLine("Calling CWE398_Poor_Code_Quality__empty_while_01_bad();");
	CWE398_Poor_Code_Quality__empty_while_01_bad();

	printLine("Calling CWE398_Poor_Code_Quality__equals_01_bad();");
	CWE398_Poor_Code_Quality__equals_01_bad();


	printLine("Calling CWE398_Poor_Code_Quality__five_01_bad();");
	CWE398_Poor_Code_Quality__five_01_bad();


	printLine("Calling CWE398_Poor_Code_Quality__semicolon_01_bad();");
	CWE398_Poor_Code_Quality__semicolon_01_bad();
#endif /* OMITBAD */

	return 0;

} 
