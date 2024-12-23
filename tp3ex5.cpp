#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Ville {
    string nom;
    double latitude;
    double longitude;
};

void ajouterVille(vector<Ville>& villes, const string& nom, double lat, double lon) {
    villes.push_back({nom, lat, lon});
}

void rechercherVille(const vector<Ville>& villes, const string& nom) {
    for (const auto& ville : villes) {
        if (ville.nom == nom) {
            cout << "Ville : " << ville.nom << ", Latitude : " << ville.latitude 
                 << ", Longitude : " << ville.longitude << endl;
            return;
        }
    }
    cout << "Ville non trouvée." << endl;
}

int main() {
    vector<Ville> villes;

    ajouterVille(villes, "Tunis", 36.8, 10.1);
    ajouterVille(villes, "Sousse", 15.5, 10.6);
    ajouterVille(villes, "Sfax", 34,5, 10.0);

    string nom;
    cout << "Entrez le nom de la ville à rechercher : ";
    cin >> nom;

    rechercherVille(villes, nom);

    return 0;
}
