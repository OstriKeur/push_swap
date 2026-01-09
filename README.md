# Push_swap

Algorithme de tri optimisé avec piles - Projet 42 Paris

## À propos

Push_swap est un projet algorithmique qui consiste à trier une pile de nombres entiers en utilisant un nombre limité d'opérations spécifiques. C'est un défi d'optimisation où l'objectif est de minimiser le nombre d'opérations nécessaires pour trier la pile.

Ce projet m'a permis de comprendre en profondeur les algorithmes de tri, l'optimisation, et la manipulation de structures de données comme les piles. C'est un excellent exercice pour apprendre à penser algorithmiquement et à optimiser ses solutions.

## Objectif

Trier une pile A en utilisant uniquement les opérations autorisées et une pile B auxiliaire, en minimisant le nombre d'opérations.

## Opérations autorisées

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

## Utilisation

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

## Critères d'évaluation

Le projet est évalué selon le nombre d'opérations utilisées :

- **3 nombres** : Maximum 3 opérations
- **5 nombres** : Maximum 12 opérations
- **100 nombres** : Maximum 700 opérations (5 points)
- **500 nombres** : Maximum 5500 opérations (5 points)

## Algorithmes utilisés

Pour les petites piles (3-5 éléments), j'utilise un tri direct avec algorithmes simples. Pour les piles moyennes (100 éléments), j'utilise un algorithme de tri par insertion optimisé. Pour les grandes piles (500 éléments), j'utilise un algorithme de tri par chunks.

L'idée principale est de calculer le coût de chaque opération pour choisir la meilleure stratégie selon la taille de la pile.

## Ce que j'ai appris

- Algorithmes de tri et optimisation
- Manipulation efficace des piles (stacks)
- Techniques pour minimiser le nombre d'opérations
- Analyse de complexité temporelle et spatiale
- Résolution de problèmes complexes de manière méthodique
- Gestion de mémoire efficace
- Création de tests pour valider les solutions

## Structure du projet

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

## Notes

- Le projet doit gérer les cas d'erreur (doublons, nombres invalides, etc.)
- La pile B est utilisée comme pile auxiliaire
- L'objectif est d'optimiser le nombre d'opérations, pas seulement de trier

---

**Projet réalisé dans le cadre du cursus 42 Paris**
