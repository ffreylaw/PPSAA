/* Show scope of declarations, example 4.
*/
#include <stdio.h>

void func(int);

int x=6, y=7, z=10;

int
main(int argc, char **argv) {
	int z=5;
	func(x);
	func(y);
	func(z);
	printf("main: x=%2d, y=%2d, z=%2d\n", x, y, z);
	return 0;
}

void
func(int x) {
	x = x+1;
	y = y+1;
	printf("func: x=%2d, y=%2d, z=%2d\n", x, y, z);
}

/* =====================================================================
   Program written by Alistair Moffat, as an example for the book
   "Programming, Problem Solving, and Abstraction with C", Pearson
   Custom Books, Sydney, Australia, 2002; revised edition 2012,
   ISBN 9781486010974.

   See http://people.eng.unimelb.edu.au/ammoffat/ppsaa/ for further
   information.

   Prepared December 2012 for the Revised Edition.
   ================================================================== */
