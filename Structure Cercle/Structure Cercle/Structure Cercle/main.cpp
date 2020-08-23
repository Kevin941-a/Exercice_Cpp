//
//  main.cpp
//  Structure Cercle
//
//  Created by Kevin Racapé on 23/08/2020.
//  Copyright © 2020 Kevin Racapé. All rights reserved.
//

#include <iostream>
#include <cmath>

struct Cercle
{
    float rayon{0};
    float circumference{0};
    float surfaceArea{0};
    const float pi{3.14};
    const uint8_t factorTwo{2};
};


int main()
{
    Cercle cercleExo;
    
    std::cout << "Calculation of circumference and surface area of a circle \n";
    std::cout << "Please enter the rayon of a circle in centimeter \n";
    std::cout << "Rayon = ";
    std::cin >> cercleExo.rayon;
    std::cout << std::endl;
    
    cercleExo.circumference = cercleExo.factorTwo * cercleExo.pi * cercleExo.rayon;
    cercleExo.surfaceArea = cercleExo.pi * pow(cercleExo.rayon, 2);
    
    std::cout << "Rayon = " << cercleExo.rayon << " cm" << std::endl;
    std::cout << "Circumference = " << cercleExo.circumference << " cm" << std::endl;
    std::cout << "Surface Area = " << cercleExo.surfaceArea << " cm²" << std::endl;
    std::cout << std::endl;
    
    return 0;
}
