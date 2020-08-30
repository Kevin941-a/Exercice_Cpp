    //
//  main.cpp
//  Signe_Produit
//
//  Created by Kevin Racapé on 30/08/2020.
//  Copyright © 2020 Kevin Racapé. All rights reserved.
//

#include <iostream>

int main()
{
    float firstValue{0}, secondValue{0};
    
    std::cout << "Sign of a product \n";
    std::cout << "Enter the first value a = ";
    std::cin >> firstValue;
    std::cout << "Enter the second value b = ";
    std::cin >> secondValue;
    
    
    if((firstValue < 0) and (secondValue > 0))
    {
        std::cout << "The product of " << firstValue << " and " << secondValue << " is negative \n";
    }
    if((firstValue > 0) and (secondValue < 0))
    {
        std::cout << "The product of " << firstValue << " and " << secondValue << " is negative \n";
    }
    if((firstValue < 0) and (secondValue < 0))
    {
        std::cout << "The product of " << firstValue << " and " << secondValue << " is positive \n";
    }
    if((firstValue >= 0) and (secondValue >= 0))
    {
        std::cout << "The product of " << firstValue << " and " << secondValue << " is positive \n";
    }
    
    return 0;
}
