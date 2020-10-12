//
//  Point.hpp
//  ClassePoint
//
//  Created by Kevin Racapé on 12/10/2020.
//

//#ifndef Point_hpp
//#define Point_hpp

#pragma once

class Point
{
public:
    Point(float abscisse, float ordonnee);
    void deplace(float deplaceX, float deplaceY);
    void affiche();
    void setAbscisse(float newAbscisse);
    void setOrdonnee(float newOrdonnee);
    
private:
    float x, y;
};


//#endif /* Point_hpp */
