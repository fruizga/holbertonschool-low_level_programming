#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char lt;
for (lt = 'a'; lt <= 'z'; lt++)
{
if (lt == 'q' || lt == 'e')
;
else
putchar(lt);
}
putchar('\n');
return (0);
}
