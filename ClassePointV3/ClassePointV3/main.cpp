//
//  main.cpp
//  ClassePointV3
//
//  Created by Kevin Racapé on 21/10/2020.
//

#include <iostream>
#include <vector>
#include <string>
#include "Point.hpp"


int main()
{
    Point p(0.0, 0.0);
    float mainAbscisse, mainOrdonnee, mainDeplaceX, mainDeplaceY, mainHomothetie, mainRotation;
    
    std::cout << "Saisir les coordonnées du point." << std::endl;
    
    std::cout << "X = ";
    std::cin >> mainAbscisse;
    p.setAbscisse(mainAbscisse);
    
    std::cout << "Y = ";
    std::cin >> mainOrdonnee;
    p.setOrdonnee(mainOrdonnee);
    std::cout << std::endl;
    p.affiche();
    std::cout << std::endl;
    
    std::cout << "Saisir le déplacement du point." << std::endl;
    
    std::cout << "Deplacement de X = ";
    std::cin >> mainDeplaceX;
    
    std::cout << "Deplacement de Y = ";
    std::cin >> mainDeplaceY;
    std::cout << std::endl;
    
    p.deplace(mainDeplaceX, mainDeplaceY);
    
    std::cout << "Les coordonnées du point sont : X = " << p.getAbscisse() << " et Y = " << p.getOrdonnee() << " ." << std::endl;
    std::cout << "Coordonnées polaires : r = " << p.rho() << " et angle = " << p.theta() << "." << std::endl;
    
    
    std::cout << "Fonction Homothetie" << std::endl;
    std::cout << "Valeur Homothetie : ";
    std::cin >> mainHomothetie;
    p.homothetie(mainHomothetie);
    p.affiche();
    std::cout << std::endl;
    
    std::cout << "Fonction Rotation" << std::endl;
    std::cout << "Valeur de roation : ";
    std::cin >> mainRotation;
    p.rotation(mainRotation);
    p.affiche();
    std::cout << std::endl;
    
    std::cout << "Coordonnées polaires : r = " << p.rho() << " et angle = " << p.theta() << "." << std::endl;
    std::cout << std::endl;
    
    return 0;
}
