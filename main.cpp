#include "compteur.h"
#include <iostream>
#include <cstdlib>

int main() 
{
    compteur c;
    c.clic();;
    c.afficheValeur();
    c.raz();
    c.afficheValeur();
    c.clic();
    c.clic();
    compteur c2;
    c2.clicMultiples(c.getvaleur());
    c2.afficheValeur();
}