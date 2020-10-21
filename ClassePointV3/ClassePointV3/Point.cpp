//
//  Point.cpp
//  ClassePointV3
//
//  Created by Kevin Racapé on 21/10/2020.
//
#include "Point.hpp"
#include <iostream>
#include <cmath>

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

float Point::getAbscisse()
{
    return x;
}

float Point::getOrdonnee()
{
    return y;
}

float Point::rho()
{
    return sqrt(x*x + y*y);
}

float Point::theta()
{
    return atan(y/x);
}

void Point::rotation(float rotation)
{
    float r = sqrt(x*x + y*y);
    float t = atan(y/x);
    t += rotation;
    
    x = r * cos(t);
    y = r * sin(t);
}

void Point::homothetie(float homothetie)
{
    x *= homothetie;
    y *= homothetie;
}
