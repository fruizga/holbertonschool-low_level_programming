#include "lists.h"
/**
 *StartupFun - Prints before main
 *Returns: void
 *Description: prints before main()
 */
void StartupFun(void) __attribute__ ((constructor));
/**
 *StartupFun - Prints before main
 *Returns: void
 *Description: prints before main()
 */
void StartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
