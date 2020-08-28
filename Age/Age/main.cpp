//
//  main.cpp
//  Age
//
//  Created by Kevin Racapé on 28/08/2020.
//  Copyright © 2020 Kevin Racapé. All rights reserved.
//

#include <iostream>

int main()
{
    int Age;
    
    
    
    std::cout << "Entrer l'age : ";
    std::cin >> Age;
    bool test = not(Age < 18) and not(Age > 100 );

    if(test)
    {
        std::cout << "Age : " << Age << std::endl;
    }
    else
    {
        std::cout << "Erreur age \n";
    }
    
    return 0;
}
