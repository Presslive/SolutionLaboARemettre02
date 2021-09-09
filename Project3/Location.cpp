//But:	�crire un programme qui calcule le montant qu'un individu devra d�bourser pour faire un voyage dans une automobile lou�e
//:Auteur: Diallo Abdoulaye
//Date:	2021-09-08

#include <iostream>

int main()

{
    setlocale(LC_ALL, "");

    int Kilometrage, DureeVoyage, Location, TotalEssence; //Variables utilis�es dans ce programme
                                                          //FR : Kilometrage=Nombre de kilometre que l'utilisatteur va rentr�
                                                          //DureeVoyage=Nombre de (jours) que le voyage va durer

    std::cout << "R�pondez aux deux questions suivantes pour avoir un apercu\ndu montant que vous d�bourseriez pour votre voyage!\n\n\n";

    //FR : L'utilsateur voit sa en premier lieu

    // FR :
    std::cout << "Quelle sera le Kilom�trage � parcourir :"; //L'utilisateur voit cette question en premier
    std::cin >> Kilometrage;                                 //L'utilisateur r�pond � la question en rentrant le nombre de Kmetrage parcouru

    std::cout << "Quelle sera la dur�e du voyage en(jours) : "; //L'utilisateur voit cette question en deuxi�me

    std::cin >> DureeVoyage; //L'utilisateur r�pond � la question en rentrant le nombre de JOURS pour le voyage

    Location = 45 * DureeVoyage;                         //Location=Prix du vehicule louee multiplier par La Duree du Voyage
    TotalEssence = (((Kilometrage * 7.6) / 100) * 1.25); //TotalEssence= Le Kilometrage multiplier par 7.6L divise par 100 et le total multiplier par le prix
                                                         //d'un litre d'essence c'est-�-dire 1.25$

    if (Kilometrage > 250) //Condition: Si le Kilometrage rentrer par L'utilisateur est plus grand que 250 pour 1 journ�e,

    {

        (Kilometrage - 250) * 0.05; //FR : sa calcule le kilometrage -250 km multiplier par 0,05$ qui r�presente le prix pour chaque km supplementaire

        std::cout << "\n Le montant que vous d�bourserez est de " << Kilometrage + Location << "$\n"; //Si c'est le cas, sa affiche comme r�sultat le Kilometrage
                                                                                                      //Plus la Location et affiche le r�sultat
    }

    else
    {
        std::cout << "Le montant que vous d�bourserez est de " << Location + TotalEssence << "$\n"; // Si il n'y a pas de kilometrage supplementaire, il calcule le total
                                                                                                    //de Location plus le TotalEssence et affiche le r�sultat
    }

    system("pause");
    /*
        Plan tests

        L�gendes

        Km=Kilometrage(cin)
        Dur=DureeVoyage(cin)

                            Km=300										Le montant que vous d�bourserez est de 525$
                            Dur=5


                            Km=10										Le montant que vous d�bourserez est de 225$
                            Dur=5


                            KM=-588										Le montant que vous d�bourserez est de 35$
                            Dur=2

                            KM=2322424.2								Erreur
                            Dur=-25





    */

    return 0;
}