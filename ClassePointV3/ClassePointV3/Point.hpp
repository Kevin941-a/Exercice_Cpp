//
//  Point.hpp
//  ClassePointV3
//
//  Created by Kevin Racapé on 21/10/2020.
//

#pragma once

class Point
{
public:
    Point(float abscisse, float ordonnee);
    void deplace(float deplaceX, float deplaceY);
    void affiche();
    void setAbscisse(float newAbscisse);
    void setOrdonnee(float newOrdonnee);
    float getAbscisse();
    float getOrdonnee();
    void homothetie(float homothetie);
    void rotation(float rotation);
    float rho();
    float theta();
    
private:
    float x, y;
};
