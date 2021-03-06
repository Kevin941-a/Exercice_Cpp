//
//  main.cpp
//  ClassePoint
//
//  Created by Kevin Racapé on 11/10/2020.
//

#include <iostream>
#include <vector>
#include <string>
#include "Point.hpp"


int main()
{
    Point p(0.0, 0.0);
    float mainAbscisse, mainOrdonnee, mainDeplaceX, mainDeplaceY;
    
    std::cout << "Saisir les coordonnées du point." << std::endl;
    std::cout << "X = ";
    std::cin >> mainAbscisse;
    p.setAbscisse(mainAbscisse);
    std::cout << "Y = ";
    std::cin >> mainOrdonnee;
    p.setOrdonnee(mainOrdonnee);
    p.affiche();
    std::cout << std::endl;
    
    std::cout << "Saisir le déplacement du point." << std::endl;
    std::cout << "Deplacement de X = ";
    std::cin >> mainDeplaceX;
    std::cout << "Deplacement de Y = ";
    std::cin >> mainDeplaceY;
    p.deplace(mainDeplaceX, mainDeplaceY);
    p.affiche();
    std::cout << std::endl;
    return 0;
}
