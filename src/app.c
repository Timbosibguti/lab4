#include <stdio.h>
#include <math.h>

int uravn(double a, double b, double c, double *x1, double *x2)
{
	int d;
	if (a == 0)
		return -1;
	d = (b * b) - (4 * a * c);
	if (d < 0)
		return 0;
	if (d == 0)
	{
		x1 = -b / (2 * a);
		return 1;
	}
}
