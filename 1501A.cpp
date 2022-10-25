#include <iostream>
#include <vector>
int main() {
	int n = 0, t = 0;

	std::cin >> t;
	
	for (int z = 0; z < t; z++) {
		std::vector <int> a(1000000);
		std::vector <int> b(1000000);
		a[0] = 0;
		b[0] = 0;
		int n = 0;
		std::cin >> n;

		for (int i = 1; i <= n; i++) {
			std::cin >> a[i] >> b[i];
		}

		std::vector <int> tm(1000000);

		for (int i = 0; i < n; i++) {
			std::cin >> tm[i];
		}

		int time = 0;

		int j = 0;
		for (int i = 1; i <= n; i++) {
			time = j +  a[i] - b[i - 1] + tm[i - 1];
			j = std::max(b[i], time + (b[i] - a[i] + 1) / 2);
		}

		



		std::cout << time << '\n';

	}
}