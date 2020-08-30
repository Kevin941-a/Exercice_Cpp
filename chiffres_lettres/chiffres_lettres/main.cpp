//
//  main.cpp
//  chiffres_lettres
//
//  Created by Kevin Racapé on 30/08/2020.
//  Copyright © 2020 Kevin Racapé. All rights reserved.
//

#include <iostream>

int main()
{
    int value{0};
    
    std::cout << "Numbers into letters \n";
    std::cout << "Enter a value between 0 and 6 : ";
    std::cin >> value;
    
    switch (value)
    {
        case 0:
            std::cout << "zero \n";
            break;
            
        case 1:
            std::cout << "one \n";
            break;
            
        case 2:
            std::cout << "two \n";
            break;
            
        case 3:
            std::cout << "three \n";
            break;
            
        case 4:
            std::cout << "four \n";
            break;
            
        case 5:
            std::cout << "five \n";
            break;
            
        case 6:
            std::cout << "six \n";
            break;
            
        default:
            std::cout << " Value out of context. \n";
            break;
    }
    
    
    return 0;
}
