using namespace std;
#include "compteur.h"
#include <iostream>
#include <string>

compteur::compteur() 
{
    valeur = 0;
}
compteur::~compteur() 
{
    // Code de nettoyage si nécessaire
}
void compteur::clic(void) 
{
    valeur++;
}
void compteur::raz(void) 
{
    valeur = 0;
}
void compteur::afficheValeur(void) 
{
    cout << "La valeur du compteur est : " << valeur << endl ;
}
void compteur::clicMultiples(int n) 
{
    valeur += n;
}
int compteur::getvaleur() const 
{
    return valeur;
}
// Note: setValeur was removed because it's not declared in compteur.h
// If you need a setter, declare it in the header and re-add the implementation.