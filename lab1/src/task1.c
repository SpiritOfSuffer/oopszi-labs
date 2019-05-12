#include <stdio.h>
#include <math.h>

int main()
{
	double x, y;

	x = 5;
	y = (sin(3.14 / 2 + 3 * x)) / (1 - sin(3 * x - 3.14));

	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);

	scanf("%lf", &x);
	y = (sin(3.14 / 2 + 3 * x)) / (1 - sin(3 * x - 3.14));

	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);
	
	system("pause");
	return 0;
}
