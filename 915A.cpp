#include <iostream>
#include <vector>
int main() {
	int n = 0, k = 0, v = 0, cout = 0;
	std::cin >> n >> k;
	std::vector <int> a(n);

	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		if (k % a[i] == 0) {
			v = k / a[i];
			
			break;
		}
	}

	for (int i = 0; i < n; i++) {
		if (k % a[i] == 0) {
			

			for (int l = i + 1; l < n; l++) {
				
				if (k % a[l] == 0) {
				
					
					if (v <= k / a[l]) {
						v = v;
					}
					
					
					else {
						v = k / a[l];
					}
				}
				
				
			}
			
		}
	}
	std::cout << v;
}