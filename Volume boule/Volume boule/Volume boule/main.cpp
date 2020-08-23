//
//  main.cpp
//  Volume boule
//
//  Created by Kevin Racapé on 23/08/2020.
//  Copyright © 2020 Kevin Racapé. All rights reserved.
//

#include <iostream>
#include <cmath>

int main()
{

    const float pi = 3.14159;
    const uint8_t factorFour{4}, factorThree{3};
    
    float rayon {0};
    float volume{0};
    
    std::cout << "Volume of a ball \n";
    std::cout << "Formula : (4*pi*R³)/3 \n";
    std::cout << "\n";
    
    std::cout << "Enter the rayon R = ";
    std::cin >> rayon;
    std::cout << std::endl;
    
    volume = (factorFour * pi * pow(rayon, 3))/factorThree;
    
    std::cout << "Volume = " << volume << std::endl;
    
    return 0;
}
