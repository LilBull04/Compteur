# Compteur — Projet C++

Un exemple simple de programmation orientée objet en C++ implémentant une classe `compteur`.

## Structure du projet

```
.
├── compteur.h      # Déclaration de la classe
├── compteur.cpp    # Implémentation de la classe
├── main.cpp        # Programme principal (démonstration)
└── compteur.exe    # Exécutable compilé (Windows)
```

## Description

La classe `compteur` modélise un compteur entier avec des opérations de base : incrémenter, remettre à zéro et afficher la valeur courante.

## Classe `compteur`

### Attributs privés

| Attribut | Type  | Description              |
|----------|-------|--------------------------|
| `valeur` | `int` | Valeur courante du compteur (initialisée à 0) |

### Méthodes publiques

| Méthode                  | Description                                      |
|--------------------------|--------------------------------------------------|
| `compteur()`             | Constructeur — initialise `valeur` à `0`         |
| `~compteur()`            | Destructeur                                      |
| `void clic()`            | Incrémente la valeur de 1                        |
| `void raz()`             | Remet la valeur à zéro                           |
| `void clicMultiples(int n)` | Incrémente la valeur de `n`                 |
| `void afficheValeur()`   | Affiche la valeur dans la console                |
| `int getvaleur() const`  | Retourne la valeur courante                      |

## Exemple d'utilisation

```cpp
compteur c;
c.clic();           // valeur = 1
c.afficheValeur();  // Affiche : La valeur du compteur est : 1
c.raz();            // valeur = 0
c.afficheValeur();  // Affiche : La valeur du compteur est : 0
c.clic();
c.clic();           // valeur = 2

compteur c2;
c2.clicMultiples(c.getvaleur()); // c2.valeur = 2
c2.afficheValeur(); // Affiche : La valeur du compteur est : 2
```

## Compilation

### Linux / macOS

```bash
g++ -o compteur main.cpp compteur.cpp
./compteur
```

### Windows

```bash
g++ -o compteur.exe main.cpp compteur.cpp
compteur.exe
```

## Sortie attendue

```
La valeur du compteur est : 1
La valeur du compteur est : 0
La valeur du compteur est : 2
```
