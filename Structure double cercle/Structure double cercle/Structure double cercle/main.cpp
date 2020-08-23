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

struct CercleFactorTwo
{
    float rayonFactorTwo{0}, circumferenceFactorTwo{0}, surfaceAreaFactorTwo{0};
};

int main()
{
    Cercle cercleExo;
    CercleFactorTwo cercleMultiplicateByTwo;
    
    const float pi{3.14};
    const uint8_t factorTwo{2};
    
    std::cout << "Circumference and surface area of a circle \n";
    std::cout << "Enter the rayon of a circle in centimeter \n";
    std::cout << "Rayon = ";
    std::cin >> cercleExo.rayon;
    cercleMultiplicateByTwo.rayonFactorTwo = cercleExo.rayon * 2;
    std::cout << std::endl;
    
    cercleExo.circumference = factorTwo * pi * cercleExo.rayon;
    cercleMultiplicateByTwo.circumferenceFactorTwo = factorTwo * pi * cercleMultiplicateByTwo.rayonFactorTwo;
    
    cercleExo.surfaceArea = pi * pow(cercleExo.rayon, 2);
    cercleMultiplicateByTwo.surfaceAreaFactorTwo = pi * pow(cercleMultiplicateByTwo.rayonFactorTwo, 2);
    
    std::cout << "First circle" << std::endl;
    std::cout << "Rayon = " << cercleExo.rayon << " cm" << std::endl;
    std::cout << "Circumference = " << cercleExo.circumference << " cm" << std::endl;
    std::cout << "Surface Area = " << cercleExo.surfaceArea << " cm²" << std::endl;
    std::cout << std::endl;
    
    std::cout << "Second circle" << std::endl;
    std::cout << "Rayon 2nd circle = " << cercleMultiplicateByTwo.rayonFactorTwo << " cm" << std::endl;
    std::cout << "Circumference 2nd circle = " << cercleMultiplicateByTwo.circumferenceFactorTwo << " cm" << std::endl;
    std::cout << "Surface Area 2nd circle = " << cercleMultiplicateByTwo.surfaceAreaFactorTwo << " cm²" << std::endl;
    std::cout << std::endl;
    
    return 0;
}
