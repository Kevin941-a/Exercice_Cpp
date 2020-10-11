//
//  main.cpp
//  ClassePoint
//
//  Created by Kevin Racapé on 11/10/2020.
//

#include <iostream>
#include <vector>
#include <string>

class Point
{
public:
    Point(float abscisse, float ordonnee)
    {
        x = abscisse;
        y = ordonnee;
    }
    
    void deplace(float deplaceX, float deplaceY)
    {
        x += deplaceX;
        y += deplaceY;
    }
    
    void affiche()
    {
        std::cout << "Les coordonnées du point sont : x = " << x << " et y = " << y << std::endl;
    }
    
private:
    float x, y;
};

int main()
{
    Point p(2.43, 7.98);
    p.affiche();
    p.deplace(5.7, 1);
    p.affiche();
    return 0;
}
