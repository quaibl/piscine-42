# C Pointers

[Retour au sommaire](../README.md)

Ce module montre comment une fonction C peut modifier une variable ou un tableau en recevant son adresse. Commence par `ex0`, puis essaie `ex2` pour voir comment la fonction agit sur deux variables.

| Exercice | Fonction | À observer |
| --- | --- | --- |
| [ex0](ex0/ft_ft.c) | `ft_ft` | Modifier un entier à travers son adresse. |
| [ex1](ex1/ft_ultimate_ft.c) | `ft_ultimate_ft` | Atteindre un entier en suivant neuf niveaux de pointeurs. |
| [ex2](ex2/ft_swap.c) | `ft_swap` | Échanger deux valeurs dans les variables d’origine. |
| [ex3](ex3/ft_div_mod.c) | `ft_div_mod` | Écrire le quotient et le reste dans deux variables de sortie. |
| [ex4](ex4/ft_ultimate_div_mod.c) | `ft_ultimate_div_mod` | Remplacer les deux valeurs d’entrée par le quotient et le reste. |
| [ex5](ex5/ft_rev_int_tab.c) | `ft_rev_int_tab` | Inverser un tableau sur place. |
| [ex6](ex6/ft_sort_int_tab.c) | `ft_sort_int_tab` | Trier un tableau d’entiers dans l’ordre croissant. |

## Essayer deux fonctions

Depuis ce dossier, crée un fichier local `test_pointers.c` avec le code ci-dessous. Les assertions vérifient un échange de valeurs et l’inversion de deux tableaux. Dans le tableau de longueur impaire, l’élément central garde sa position.

```c
#include <assert.h>

void ft_swap(int *a, int *b);
void ft_rev_int_tab(int *tab, int size);

int main(void)
{
    int a = 4;
    int b = -2;
    int even[] = {1, 2, 3, 4};
    int odd[] = {1, 2, 3};

    ft_swap(&a, &b);
    assert(a == -2 && b == 4);
    ft_rev_int_tab(even, 4);
    assert(even[0] == 4 && even[1] == 3 && even[2] == 2 && even[3] == 1);
    ft_rev_int_tab(odd, 3);
    assert(odd[0] == 3 && odd[1] == 2 && odd[2] == 1);
    return (0);
}
```

```sh
cc -Wall -Wextra -Werror test_pointers.c ex2/ft_swap.c \
  ex5/ft_rev_int_tab.c -o test_pointers
./test_pointers
```

Si les assertions passent, le programme se termine sans affichage.
