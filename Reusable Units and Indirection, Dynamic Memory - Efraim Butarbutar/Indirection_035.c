//Efraim Asidovanio Butarbutar
//14S21035

#include <stdio.h>
int main(int _argc, char **_argv) {
	short int i = 100;
	short int *pi = NULL;
	short int **ppi = NULL;
	
	pi = &i;
	ppi = &pi;

	printf(" i=%d, &i=%p.\n\n", i, &i);
	printf(" *pi=%d, pi=%p, &pi=%p.\n\n", *pi, pi, &pi);
	printf("**ppi=%d, *ppi=%p, ppi=%p, &ppi=%p.\n\n", **ppi, *ppi, ppi, &ppi);
	
	return 0;
}
