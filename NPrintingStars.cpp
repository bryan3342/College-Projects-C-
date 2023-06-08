#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive whole number as size n: ";
    cin >> n;

    // Print the pattern
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(j == 0 || j == n-1 || i == j) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
