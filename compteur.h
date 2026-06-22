using namespace std;
#ifndef COMPTEUR_H
#define COMPTEUR_H
#include <string>

class compteur {
private:
    int valeur;
public:
    compteur();
    ~compteur();
    void clic(void);
    void raz(void);
    void afficheValeur(void);
    void clicMultiples(int n);
    int getvaleur() const;
};

#endif // COMPTEUR_H