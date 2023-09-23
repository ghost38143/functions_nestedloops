#include "main.h"
/**
 * times_table - printing 9 times table
 * Return : nothing
 */
void times_table(void)
{
	int m;
	int n, z;
	 for (m = 0; m < 10; m++)
	 {
		 for (n = 0; n < 10; n++)
		 {
			 z = m * n;
			 if (z >= 10)
				 {
					 _putchar ('0' + z / 10);
					 _putchar ('0' + z % 10);
					 _putchar (',');
					 _putchar (' ');
				 }
			 else
			 {
				 _putchar ('0' + z);
				 _putchar (',');
				 _putchar (' ');
				 _putchar (' ');
			 }
		 }
		 _putchar ('\n');
	 }
}

