//
//  main.cpp
//  classePointV4
//
//  Created by Kevin Racapé on 23/10/2020.
//

#include <iostream>
#include <cmath>

class point
{
protected:
    float x, y;
public:
    void initialise (float abs=0.0, float ord=0.0)
    {
        x = abs;
        y = ord;
    }

    void affiche()
    {
        std::cout << "Point de coordonnées : " << x << " " << y << std::endl;
    }

    float abs() { return x; }
    float ord() { return y; }
};

class pointb : public point
{
public:
    pointb(float a = 1.0, float b = 1.0)
    {
        x = a;
        y = b;
    }
    
  float rho()
    {
        return sqrt(pow(x, 2) + pow(y, 2));
    }
    
};

int main()
{
    
    
    
    
    return 0;
}
