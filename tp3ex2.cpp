#include <iostream>
#include <vector>
using namespace std;

void remplir(vector<int>& vec, int s) {
    cout << "Entrez les valeurs du tableau :\n";
    for (int i = 0; i < s; i++) {
        int val;
        cin >> val;
        vec.push_back(val);
    }
}

void recherche(const vector<int>& vec, int V) {
    for (size_t i = 0; i < vec.size(); i++) {
        if (vec[i] == V) {
            cout << V << " se trouve dans le tableau à la position " << i << endl;
            return;
        }
    }
    cout << V << " ne se trouve pas dans le tableau\n";
}

int main() {
    int s, V;
    cout << "Entrez la taille du tableau : ";
    cin >> s;

    vector<int> vec;
    remplir(vec, s);

    cout << "Entrez la valeur à rechercher : ";
    cin >> V;
    recherche(vec, V);

    return 0;
}
