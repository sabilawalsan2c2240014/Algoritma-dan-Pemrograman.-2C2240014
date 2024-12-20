#include <iostream>

int fungsi_fx(int x) {
    return x * x - 2 * x + 5;
}

int main() {
    int A, B;

    std::cout << "Masukkan nilai A: ";
    std::cin >> A;
    std::cout << "Masukkan nilai B: ";
    std::cin >> B;

    if (A > B) {
        std::cout << "Error: A harus lebih kecil atau sama dengan B." << std::endl;
        return 1;
    }

    for (int x = A; x <= B; x++) {
        std::cout << "f(" << x << ") = " << fungsi_fx(x) << std::endl;
    }

    return 0;
}
