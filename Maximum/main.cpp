//
//  main.cpp
//  Essai
//
//  Created by Séverine on 29/08/2020.
//  Copyright © 2020 Séverine. All rights reserved.
//

#include <iostream>

int main()
{
    int a{0},b{0},c{0},max{0};
    
    std::cout << "Enter 3 values \n";
    std::cout << "a = ";
    std::cin >> a;
    //std::cout << std::endl;
    std::cout << "b = ";
    std::cin >> b;
    //std::cout << std::endl;
    std::cout << "c = ";
    std::cin >> c;
    //std::cout << std::endl;
    
    if((a>b) and (a>c))
    {
        //std::cout << "Le maximum est : " << a << std::endl;
        max = a;
    }
    else if((b>a) and (b>c))
    {
        //std::cout << "Le maximum est : " << b << std::endl;
        max = b;
    }
    else if((c>a) and (c>b))
    {
        //std::cout << "Le maximum est : " << c << std::endl;
        max = c;
    }
    else
    {
        max = -1;
    }
    
    if(max>=0)
    {
        std::cout << "Le maximum est : " << max << std::endl;
    }
    else
    {
        std::cout << "Il n'y a pas de maximum." << std::endl;
    }
    
    return 0;
}
