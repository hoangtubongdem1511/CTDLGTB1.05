#include <iostream>
using namespace std;
const int MAX = 100;

int demSoDuong(float a[], int n) {
    if (n == 0) {
        return 0;
    }
    if (a[n-1] > 0) {
        return 1 + demSoDuong(a, n-1);
    }
    return demSoDuong(a, n-1);
}

int main() {
    int n;
    float a[MAX];
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i+1 << ": ";
        cin >> a[i];
    }

    cout << "Mang vua nhap la: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    int soDuong = demSoDuong(a, n);
    cout << "So luong gia tri duong trong mang la: " << soDuong << endl;

    return 0;
}
