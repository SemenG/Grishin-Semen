#include <iostream>
#include <vector>
int main() {

    int t = 0, n = 0,k = 1;
    std::vector <int> a(105);
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        std::cin >> n;
        for (int l = 0; l < n; l++) {
            std::cin >> a[l];
        }

        for (int m = 0; m < t; m++) {
            k = 1;
            if (a[0] == 1) {
                k++;
            }
            for (int j = 1; j < n; j++) {
                if (a[j] == 1 && a[j - 1] != 1) {
                    k++;
                }
                if (a[j] == 1 && a[j - 1] == 1) {
                    k += 5;
                }
                if (a[j] == 0 && a[j - 1] == 0) {
                    k = -1;
                    break;
                }
            }
            
        }
        std::cout << k << '\n';
    }
}   