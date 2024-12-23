#include <iostream>
using namespace std;

int countPositives(int* arr, int s) {
    int c = 0;
    for (int i = 0; i < s; i++) {
        if (arr[i] > 0) c++;
    }
    return c;
}

int main() {
    int s;
    cout << "Entrez la taille du tableau : ";
    cin >> s;

    int* arr = new int[size];
    cout << "Entrez les valeurs du tableau :\n";
    for (int i = 0; i < s; i++) {
        cin >> arr[i];
    }

    int positives = countPositives(arr, s);
    cout << "Nombre de valeurs positives : " << positives << endl;

    delete[] arr;
    return 0;
}
