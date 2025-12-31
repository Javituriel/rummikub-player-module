# Rummikub – Player Module (C Language)

## 📌 Description
Ce projet correspond au module **Player** du jeu Rummikub, développé en langage C.
Il gère toutes les informations et actions liées aux joueurs, telles que :
- la gestion des tuiles,
- le calcul du score,
- l’ajout et la suppression de tuiles,
- l’affichage des informations du joueur.

Ce module est conçu pour être intégré dans un projet plus large du jeu Rummikub.

---

## 🧩 Fonctionnalités principales
- Création d’un joueur
- Ajout et suppression de tuiles
- Affichage de la main du joueur
- Calcul du score
- Structure claire et modulaire

---

## 📁 Structure du projet

rummikub-player/

player.h // Déclaration des structures et fonctions
player.c // Implémentation des fonctions du joueur
main.c // Programme de test
README.md // Documentation



---

## 🧠 Description des fichiers

### `player.h`
Contient :
- La structure `Player`
- La structure `Tile`
- Les prototypes des fonctions

### `player.c`
Contient :
- L’implémentation complète des fonctions du joueur
- La gestion des tuiles et du score

### `main.c`
Permet de tester le module :
- Création d’un joueur
- Ajout de tuiles
- Affichage et calcul du score

---

## ⚙️ Compilation et exécution

Sous Linux / Windows (Git Bash) :

```bash
gcc main.c player.c -o rummikub
./rummikub



