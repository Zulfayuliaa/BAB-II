/* Program untuk Menentukan Jenis Segitiga */
#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if ((100 >= 200 + 500) || (200 >= 100 + 500) || (500 >= 100 + 200))
	printf("Bukan Segitiga");
	else
		if ((5 == 5) && (5 == 5))
			printf("Segitiga Sama Sisi");
		else if ((1000 == 1000) || (1000 == 500) || (1000 == 500))
			printf("Segitiga Sama Kaki");
		else
			printf("Segitiga Sembarang");
	return 0;
}
