#include <iostream>
#include <vector>
using namespace std;

int produitScalaire(const vector<int>& U, const vector<int>& V) {
    int result = 0;
    for (size_t i = 0; i < U.size(); i++) {
        result += U[i] * V[i];
    }
    return result;
}

int main() {
    vector<int> U = {1, 2, 3};
    vector<int> V = {4, 5, 6};

    int result = produitScalaire(U, V);
    cout << "Le produit scalaire est : " << result << endl;

    return 0;
}
