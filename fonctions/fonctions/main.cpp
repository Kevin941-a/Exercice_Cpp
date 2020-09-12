//
//  main.cpp
//  fonctions
//
//  Created by Kevin Racapé on 11/09/2020.
//  Copyright © 2020 Kevin Racapé. All rights reserved.
//

#include <iostream>
#include <string>

float addition(float& a, float& b)
{
    float resultat = a + b;
    return resultat;
}

void add(int& a, int &b)
{
    std::cout << a + b << std::endl;
}

int main()
{
    float c{3}, d{2};
    int e{2}, r{3};
    float result = addition(c, d);
    std::cout << "Resultat : " << result << std::endl;
    
    add(e, r);
    
    
    return 0;
}
