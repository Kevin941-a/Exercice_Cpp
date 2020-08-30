//
//  main.cpp
//  Pair_Impair
//
//  Created by Kevin Racapé on 30/08/2020.
//  Copyright © 2020 Kevin Racapé. All rights reserved.
//

#include <iostream>

int main()
{
    constexpr int factorTwo{2};
    int number{0},rest{0};
    
    std::cout << "Even or Odd \n";
    std::cout << "Enter a number : ";
    std::cin >> number;
    
    rest = number % factorTwo;
    
    if(rest == 0)
    {
        std::cout << "Number " << number << " is even. \n";
    }
    else
    {
        std::cout << "Number " << number << " is odd. \n";
    }
    
    return 0;
}
