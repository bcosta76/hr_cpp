#include <iostream>

int main() {
    int n;
    scanf("%d", &n);
    int nArray[n];
    for(int i = 0; i < n; i++) {
        std::cin >> nArray[i];
    }
    for(int i = n-1; i >= 0; i--) {
        std::cout << nArray[i] << " ";
    }

    return 0;
}
