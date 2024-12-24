#include <iostream>
#include <string>

struct Produit {
    std::string type;  
    double prixHT;
    bool estSolde;     
};

double calculerPrix(const Produit& p) {
    double taxe = (p.type == "luxe") ? 0.25 : 0.19; 
    double remise = (p.estSolde) ? 0.20 : 0.0;       
    double prixTTC = p.prixHT * (1 + taxe);           
    prixTTC *= (1 - remise);                          
    return prixTTC;
}

int main() {
    Produit p1 = {"luxe", 100.0, false};
    Produit p2 = {"standard", 50.0, true};
    Produit p3 = {"standard", 200.0, false};

    std::cout << "Prix final produit 1 : " << calculerPrix(p1);
    std::cout << "Prix final produit 2 : " << calculerPrix(p2) ;
    std::cout << "Prix final produit 3 : " << calculerPrix(p3);

    return 0;
}
