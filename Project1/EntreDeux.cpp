//But:un programme qui demande à l’utilisateur de
//saisir 3 entiers A, B, C.Le programme indique si C est compris entre A et B ou C
//est compris entre B et A dans une phrase
//:Auteur: Diallo Abdoulaye
//Date:	2021-09-08

#include <iostream>

int main(int argc, char const* argv[])
{
    setlocale(LC_ALL, "");

    int a;
    int b;
    int c;

    std::cout << "saisissez 3 entiers: " << std::endl;
    std::cout << "Entier 1 : ";
    std::cin >> a;
    std::cout << "Entier 2 : ";
    std::cin >> b;
    std::cout << "Entier 3 :";
    std::cin >> c;

    if (c > a && c < b || c > b && c < a)
    {
        std::cout << c << " est compris entre " << a << " ET " << b;
    }
    else
    {
        std::cout << c << " n'est pas compris entre " << a << " ET " << b << std::endl;
    }

    return 0;
}

/* Plan de test

    1
    2
    3
    3 n'est pas compris entre 1 et 2

    -1
    -4
    -20
    -20 n'est pas compris entre -1 et -4

    30
    46
    35 est compris entre 30 et 46


*/