#include <iostream>

int main() {
	double x = 0.1;
	double eps = 0.0001;

	while (x <= 1.02) {
		double sum = 0.0;
		double k = 1.0;
		for (double i = 1.0; sum < eps; i++) {
			k *= 2.0 * i;
			sum = (pow(x, 2 * i)) / k;

		}
		std::cout << "x = " << x << "   sum = " << sum << '\n';
		x += 0.05;

	}
	
}