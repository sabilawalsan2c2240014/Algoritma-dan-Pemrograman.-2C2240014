#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, D, x1, x2;

    
    cout << "Masukkan koefisien a, b, dan c untuk persamaan ax^2 + bx + c = 0: ";
    cin >> a >> b >> c;

    
    if (a == 0) {
        cout << "Persamaan bukan persamaan kuadrat." << endl;
        return 1;
    }

    
    D = b * b - 4 * a * c;

    
    ofstream file("hasil_persamaan.txt");
    if (D >= 0) {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        file << "Akar persamaan: x1 = " << x1 << ", x2 = " << x2;
    } else {
        file << "Persamaan tidak memiliki akar real.";
    }
    file.close();

    cout << "Hasil perhitungan berhasil disimpan ke file hasil_persamaan.txt." << endl;

    return 0;
}
