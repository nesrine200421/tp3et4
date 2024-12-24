#include <iostream>
#include <vector>

void appliquerFiltre(std::vector<int>& vec, const std::function<void(int&)>& filtre) {
    for (int& e : vec) {
        filtre(e);
    }
}

int main() {
    std::vector<int> tab{ -2, 3, -33, 7, 99, 6, 2, -39 };
    std::cout << "************************\n";
    std::cout << "* 1. Afficher positif *\n";
    std::cout << "* 2. Afficher Negatif *\n";
    std::cout << "* 3. Superieur A *\n";
    std::cout << "************************\n";
    std::cout << "Entrez votre choix: ";
    int choix;
    std::cin >> choix;
    
    if (choix == 1) {
        appliquerFiltre(tab, [](int& x) { if (x >= 0) std::cout << x << "\t"; });
    } else if (choix == 2) {
        appliquerFiltre(tab, [](int& x) { if (x < 0) std::cout << x << "\t"; });
    } else if (choix == 3) {
        int seuil;
        std::cout << "Donner seuil: ";
        std::cin >> seuil;
        appliquerFiltre(tab, [seuil](int& x) { if (x >= seuil) std::cout << x << "\t"; });
    }
    return 0;
}
