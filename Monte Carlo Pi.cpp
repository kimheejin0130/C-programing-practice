#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int WithinCircle(double x, double y) // Check where dots are
{
	if (x*x + y*y <= 1)
		return 1; // within circle
	else
		return 0; // within square
}

int main()
{
	double pi, x, y; // pi , coordinate
	int i, wantdot,dot_InCircle = 0, dot_InSquare = 0; // 

	srand((unsigned)time(NULL)); // random numbers

	printf("Input what you want to make dots >> ");
	scanf("%d", &wantdot); // 

	for (i = 0; i < wantdot; i++) // making dots what you want
	{
		x = (double)rand() / RAND_MAX; // 0~1 random numbers
		y = (double)rand() / RAND_MAX; // 0~1 random numbers

		if (WithinCircle(x, y) == 1) dot_InCircle++; // Dot, in circle

		dot_InSquare++; // Dot, in Square
	}
	pi = 4.0*((double)dot_InCircle / dot_InSquare);

	printf("¥ð is %g\n", pi);
}