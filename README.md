# Push_swap

Algorithme de tri optimisé avec piles - Projet 42 Paris

## À propos

Push_swap est un projet algorithmique qui consiste à trier une pile de nombres entiers en utilisant un nombre limité d'opérations spécifiques. C'est un défi d'optimisation où l'objectif est de minimiser le nombre d'opérations nécessaires pour trier la pile.

Ce projet m'a permis de comprendre en profondeur les algorithmes de tri, l'optimisation, et la manipulation de structures de données comme les piles. C'est un excellent exercice pour apprendre à penser algorithmiquement et à optimiser ses solutions.

## 🎯 Objectif

Trier une pile A en utilisant uniquement les opérations autorisées et une pile B auxiliaire, en minimisant le nombre d'opérations.

## 📋 Opérations autorisées

- **sa** : Swap A - Échange les deux premiers éléments de la pile A
- **sb** : Swap B - Échange les deux premiers éléments de la pile B
- **ss** : Swap les deux - sa et sb en même temps
- **pa** : Push A - Prend le premier élément de B et le met sur A
- **pb** : Push B - Prend le premier élément de A et le met sur B
- **ra** : Rotate A - Décale tous les éléments de A vers le haut (le premier devient le dernier)
- **rb** : Rotate B - Décale tous les éléments de B vers le haut
- **rr** : Rotate les deux - ra et rb en même temps
- **rra** : Reverse rotate A - Décale tous les éléments de A vers le bas (le dernier devient le premier)
- **rrb** : Reverse rotate B - Décale tous les éléments de B vers le bas
- **rrr** : Reverse rotate les deux - rra et rrb en même temps

## 🚀 Utilisation

### Compilation

```bash
make
```

### Exécution

```bash
./push_swap [nombres]
```

Exemple :
```bash
./push_swap 3 2 1 5 4
```

### Vérification avec checker

```bash
ARG="3 2 1 5 4"; ./push_swap $ARG | ./checker $ARG
```

Le checker affichera **OK** si le tri est correct, **KO** sinon.

## 📊 Critères d'évaluation

Le projet est évalué selon le nombre d'opérations utilisées :

- **3 nombres** : Maximum 3 opérations
- **5 nombres** : Maximum 12 opérations
- **100 nombres** : Maximum 700 opérations (5 points)
- **500 nombres** : Maximum 5500 opérations (5 points)

## 🧠 Algorithmes utilisés

### Approche de base

1. **Petites piles (3-5 éléments)** : Tri direct avec algorithmes simples
2. **Piles moyennes (100 éléments)** : Algorithme de tri par insertion optimisé
3. **Grandes piles (500 éléments)** : Algorithme de tri par chunks ou merge sort adapté

### Stratégies courantes

- **Tri par chunks** : Diviser les nombres en chunks et les trier progressivement
- **Tri par insertion optimisé** : Utiliser la pile B pour optimiser les insertions
- **Calcul de coûts** : Calculer le coût de chaque opération pour choisir la meilleure

## 🎓 Ce que j'ai appris

- **Algorithmes de tri** : Compréhension approfondie des algorithmes de tri
- **Structures de données** : Manipulation efficace des piles (stacks)
- **Optimisation** : Techniques pour minimiser le nombre d'opérations
- **Analyse de complexité** : Comprendre la complexité temporelle et spatiale
- **Résolution de problèmes** : Approche méthodique pour résoudre des problèmes complexes
- **Gestion de mémoire** : Allocation et libération efficace de la mémoire
- **Tests et validation** : Création de tests pour valider les solutions

## 💡 Concepts clés

### Manipulation de piles

Les piles permettent d'accéder uniquement au sommet, ce qui limite les opérations possibles mais force à penser différemment.

### Optimisation

L'optimisation consiste à :
- Minimiser le nombre d'opérations coûteuses (rotations)
- Utiliser efficacement la pile B
- Choisir la meilleure stratégie selon la taille de la pile

### Calcul de coûts

Pour chaque élément à insérer, calculer :
- Le nombre de rotations nécessaires dans A
- Le nombre de rotations nécessaires dans B
- Choisir la combinaison la moins coûteuse

## 🔧 Structure du projet

```
push_swap/
├── src/
│   ├── main.c           # Fonction principale
│   ├── operations.c     # Implémentation des opérations
│   ├── sort.c           # Algorithmes de tri
│   └── utils.c          # Fonctions utilitaires
├── include/
│   └── push_swap.h      # Headers
├── libft/               # Bibliothèque libft
├── Makefile
└── README.md
```

## 📝 Notes

- Le projet doit gérer les cas d'erreur (doublons, nombres invalides, etc.)
- La pile B est utilisée comme pile auxiliaire
- L'objectif est d'optimiser le nombre d'opérations, pas seulement de trier

## 🎯 Défis

- **Optimisation** : Réduire le nombre d'opérations au maximum
- **Gestion des cas limites** : Pile déjà triée, doublons, etc.
- **Performance** : Gérer efficacement de grandes piles (500 éléments)

---

**Projet réalisé dans le cadre du cursus 42 Paris**
