//
//  main.cpp
//  ClassePointV2
//
//  Created by Kevin Racapé on 11/10/2020.
//

#include <iostream>

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
    
    float Abscisse()
    {
        return x;
    }
    
    float Ordonne()
    {
        return y;
    }
    
private:
    float x, y;
};

int main()
{
    Point p(2.43, 7.98);
    std::cout << "Les coordonnées du point sont : X = " << p.Abscisse() << " et Y = " << p.Ordonne() << std::endl;
    p.deplace(5.7, 1);
    std::cout << "Les coordonnées du point sont : X = " << p.Abscisse() << " et Y = " << p.Ordonne() << std::endl;
    return 0;
}
