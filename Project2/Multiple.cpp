//But:écrivez un programme qui permet de lire un entier A
//et affiche s'il est multiple de 2 ou 3 ou les deux
//:Auteur: Diallo Abdoulaye
//Date:	2021-09-08

#include <iostream>
int main()
{
    setlocale(LC_ALL, "");

    int a;

    std::cout << "Entrez un nombre: ";
    std::cin >> a;

    if (a % 2 == 0 && a % 3 == 0)
    {
        std::cout << a << " est à la fois multiple de 2 et de 3." << std::endl;
    }
    if (a % 2 == 0 && a % 3 != 0)
    {
        std::cout << a << " est seulement multiple de 2." << std::endl;
    }

    if (a % 3 == 0 && a % 2 != 0)
    {
        std::cout << a << " est seulement multiple de 3" << std::endl;
    }

    if (a % 2 != 0 && a % 3 != 0)
    {
        std::cout << a << "  n'est ni multiple de 2 ni de 3" << std::endl;
    }

    system("pause");

    return 0;
}

/*
12   est à la fois multiple de 2 et de 3.

1     n'est ni multiple de 2, ni de 3

-44   est seulement un multiple de 2.

-9     est seulement un multiple de 3.

*/