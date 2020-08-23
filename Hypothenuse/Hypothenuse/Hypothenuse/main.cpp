//
//  main.cpp
//  Hypothenuse
//
//  Created by Kevin Racapé on 22/08/2020.
//  Copyright © 2020 Kevin Racapé. All rights reserved.
//

#include <iostream>
#include <cmath>

int main()
{
    float AB{0},AC{0},BC{0},squareBC{0};
    
    std::cout << "Calculation of the Hypothenuse" << std::endl;
    std::cout << "Hypothesis : It's a right triangle" << std::endl;
    std::cout << "Formula : BC² = AB² + AC²" << std::endl;
    std::cout << std::endl;
    
    std::cout << "Enter values of AB and AC in centimeter" << std::endl;
    std::cout << "AB : ";
    std::cin >> AB;
    std::cout << "AC : ";
    std::cin >> AC;
    std::cout << std::endl;
    
    squareBC = (AB * AB) + (AC * AC);
    BC = sqrt(squareBC);
    
    std::cout << "AB = " << AB << "\t" << "AC = " << AC << "\t" << "BC = " << BC << std::endl;
    std::cout << "Hypothenuse = " << BC << " cm \n" << std::endl;
    
    std::cout << "Fonction hypot()" << std::endl;
    std::cout << "Hypot() = " << hypot(AB,AC) << " cm" << std::endl;
 
    return 0;
}

