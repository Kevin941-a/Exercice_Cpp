//
//  Point.cpp
//  ClassePoint
//
//  Created by Kevin Racapé on 12/10/2020.
//

#include "Point.hpp"
#include <iostream>

Point::Point(float abscisse, float ordonnee)
{
    x = abscisse;
    y = ordonnee;
}

void Point::deplace(float deplaceX, float deplaceY)
{
    x += deplaceX;
    y += deplaceY;
}

void Point::affiche()
{
    std::cout << "Les coordonnées du point sont : X = " << x << " et Y = " << y << " ." << std::endl;
}

void Point::setAbscisse(float newAbscisse)
{
    x = newAbscisse;
}

void Point::setOrdonnee(float newOrdonnee)
{
    y = newOrdonnee;
}
