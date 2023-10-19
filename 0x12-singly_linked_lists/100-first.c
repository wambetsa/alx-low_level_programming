#include <stdio.h>
/*
 * Application of constructor attribute to function eg startupfun()
 * its executed before our main()
*/
	void startupfun(void) __attribute__ ((constructor));


/*
 * Applying destructor to our cleanupfun()
 * its executed after our main()
 */


	void cleanupfun(void)__attribute__ ((destructor));

/**
 * startupfun - function printing text
 *
 */
	void startupfun(void)
	{
		printf("You're beat! and yet, you must allow,");
		printf("\nI bore my house upon my back!\n");
	}
