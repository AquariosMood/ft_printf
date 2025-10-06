# ft_printf - 42 School Project

## 📋 Description
ft_printf est un projet du tronc commun à 42 qui consiste à recréer la fonction printf de la librairie C standard. Ce projet permet de comprendre le fonctionnement des fonctions variadiques et la gestion des formats de sortie, tout en développant des compétences en manipulation de chaînes et en gestion de mémoire.

## 🎯 Objectifs
- Comprendre le mécanisme des fonctions variadiques en C
- Maîtriser le parsing de chaînes de format
- Implémenter un système de gestion de formats multiples
- Gérer précisément l'affichage de différents types de données

## 🛠️ Fonctions Implémentées

### 🔤 Fonction Principale
**ft_printf** - Fonction principale reproduisant le comportement de printf

### 📝 Spécificateurs de Format Implémentés
**Caractères et chaînes** : %c, %s  
**Nombres entiers** : %d, %i  
**Nombres non signés** : %u  
**Nombres hexadécimaux** : %x (minuscules), %X (majuscules)  
**Pointeurs** : %p  
**Pourcentage littéral** : %%

### ⚙️ Fonctions Auxiliaires
**Gestion des types** : 
- print_char - Affichage des caractères
- print_string - Affichage des chaînes
- print_number - Affichage des nombres entiers
- print_unsigned - Affichage des nombres non signés
- print_hex - Affichage des nombres hexadécimaux
- print_pointer - Affichage des pointeurs

**Utilitaires** :
- handle_format - Gestion du parsing des formats
- putnbr_base - Conversion et affichage en base spécifique

## 🚀 Installation et Utilisation
```bash
git clone [URL-du-repository]
cd ft_printf
make
c
#include "ft_printf.h"
// Compiler avec : -L. -lftprintf
📊 Compilation
Le Makefile supporte les règles suivantes :

make - Compile la bibliothèque

make clean - Supprime les fichiers objets

make fclean - Supprime les fichiers objets et la bibliothèque

make re - Recompile entièrement le projet
```

💡 Fonctionnalités
Gestion complète des spécificateurs de base

Compatibilité avec les flags de formatage

Gestion précise du compte de caractères imprimés

Code modulaire et facilement extensible

Gestion robuste des cas d'erreur

💡 Compétences Développées
Programmation variadique en C

Parsing et analyse de chaînes de format

Gestion de l'affichage formaté

Manipulation de bases numériques

Gestion de la mémoire et des buffers

Développement de bibliothèques réutilisables

Ce projet renforce la compréhension des mécanismes d'E/S en C et sert de base pour des projets plus complexes nécessitant un affichage formaté personnalisé.
