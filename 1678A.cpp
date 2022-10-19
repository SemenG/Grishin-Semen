#include <iostream>
#include <vector>
int main() {
	int t = 0, n = 0, pro = 0, hod = 0, check = 0, mart = 0;
	std::cin >> t;
	std::vector <int> a(105);

	for (int m = 0; m < t; m++) {
		std::cin >> n;
		for (int i = 0; i < n; i++) {
			std::cin >> a[i];
		}
		mart = 0;
		check = 0;
		for (int l = 0; l < n; l++) {
			
			if (a[l] == 0) {
				check = 12;
				break;
			}
			else {
				check = 1;
			}
		}

		if (check == 12) {
			hod = n;
			for (int i = 0; i < n; i++) {
				if (a[i] == 0) {
					hod--;

				}
			}
		}

		if (check == 1) {
			for (int i = 0; i < n; i++) {
				for (int p = i + 1; p < n; p++) {
					if (a[i] == a[p]) {
						mart = 13;
						break;
					}
					
					else {
						mart = 1;
					}
				}
				
				if (mart == 13) {
					break;
				}
			}
		}

		if (mart == 13) {
			hod = n;
		}
		
		if (mart == 1) {
			hod = n + 1;
		}

		std::cout << hod << '\n';
		
	}
}

//hod = n;
//for (int i = 0; i < n; i++) {
//	if (a[i] == 0) {
//		hod--;
//
//	}
//}