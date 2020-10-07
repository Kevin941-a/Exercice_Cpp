//
//  main.cpp
//  pointeursV2
//
//  Created by Kevin Racapé on 05/10/2020.
//

#include <iostream>
#include <string>

int main()
{
    float *pointeur;
    pointeur = new float;
    
    if (pointeur)
    {
        *pointeur = 3.14;
        std::cout << *pointeur << std::endl;
    }
    
    delete pointeur;
    pointeur = nullptr;
    
    return 0;
}
