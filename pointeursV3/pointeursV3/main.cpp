//
//  main.cpp
//  pointeursV3
//
//  Created by Kevin Racapé on 07/10/2020.
//

#include <iostream>

void fonction(int *pointeur)
{
    int *p;
    p = new int;
    
    p = pointeur;
    std::cout << *p << std::endl;
}

int main()
{
    int value;

    
    std::cout << "Saisir une valeur : ";
    std::cin >> value;
    
    fonction(&value);
    

    return 0;
}
