/* Even-odd mutual recursion.
*/

#include <stdio.h>

int eeee(int);
int oooo(int);

int
eeee(int n) {
	if (n==0) {
		return(1);
	} else {
		return oooo(n-1);
	}
}

int
oooo(int n) {
	if (n==0) {
		return(0);
	} else {
		return eeee(n-1);
	}
}

int
main(int argc, char *argv[]) {
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("eeee(%d) = %d\n", n, eeee(n));
	printf("oooo(%d) = %d\n", n, oooo(n));
	return 0;
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
