//
//  main.cpp
//  Structure double cercle
//
//  Created by Kevin Racapé on 23/08/2020.
//  Copyright © 2020 Kevin Racapé. All rights reserved.
//
#include <iostream>
#include <cmath>

struct Cercle
{
    float rayon{0}, circumference{0}, surfaceArea{0};

};

int main()
{
    Cercle cercleExo;
    Cercle multiplicatedByTwo;
    
    const float pi{3.14};
    const uint8_t factorTwo{2};
    
    std::cout << "Circumference and surface area of a circle \n";
    std::cout << "Enter the rayon of a circle in centimeter \n";
    std::cout << "Rayon = ";
    std::cin >> cercleExo.rayon;
    multiplicatedByTwo.rayon = cercleExo.rayon * 2;
    std::cout << std::endl;
    
    cercleExo.circumference = factorTwo * pi * cercleExo.rayon;
    multiplicatedByTwo.circumference = factorTwo * pi * multiplicatedByTwo.rayon;
    
    cercleExo.surfaceArea = pi * pow(cercleExo.rayon, 2);
    multiplicatedByTwo.surfaceArea = pi * pow(multiplicatedByTwo.rayon, 2);
    
    std::cout << "First circle" << std::endl;
    std::cout << "Rayon = " << cercleExo.rayon << " cm" << std::endl;
    std::cout << "Circumference = " << cercleExo.circumference << " cm" << std::endl;
    std::cout << "Surface Area = " << cercleExo.surfaceArea << " cm²" << std::endl;
    std::cout << std::endl;
    
    std::cout << "Second circle" << std::endl;
    std::cout << "Rayon 2nd circle = " << multiplicatedByTwo.rayon << " cm" << std::endl;
    std::cout << "Circumference 2nd circle = " << multiplicatedByTwo.circumference << " cm" << std::endl;
    std::cout << "Surface Area 2nd circle = " << multiplicatedByTwo.surfaceArea << " cm²" << std::endl;
    std::cout << std::endl;
    
    return 0;
}
