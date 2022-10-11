#include <iostream>
#include <vector>
int main() {



    int t = 0, n = 0, k = 1;
    std::cin >> t;
    std::vector  <int> a(101);

    for (int i = 0; i < t; i++) {
        std::cin >> n;
        for (int l = 0; l < n; l++) {
            std::cin >> a[l];
        }
        for (int iN = 0; iN < n; iN++) {
            if (a[iN] == 0 && a[iN + 1] == a[iN]) {
                k = -1;
                break;
            }
            if (a[iN] == 1 && a[iN + 1] == 0) {
                k++;
            }
            if (a[iN] == 1 && a[iN] == a[iN + 1]) {
                 k += 4;
            }
        }

        std::cout << k;
    }
}