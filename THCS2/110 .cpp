#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, del;
    scanf ("%lf %lf %lf", &a, &b, &c);
    if (a == 0) printf("NO");
    else {
		del = b * b - 4 * a * c;
		if (del < 0) printf("NO");
		else {
			if (del == 0) printf("%0.2lf", -b / (2*a));
			else {
				printf("%0.2lf ", (-b + sqrt(del)) / (2*a));
				printf("%0.2lf", (-b - sqrt(del)) / (2*a));
			}
		}
	}
    return 0;
}