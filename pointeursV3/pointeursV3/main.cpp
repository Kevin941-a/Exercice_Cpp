//
//  main.cpp
//  pointeursV3
//
//  Created by Kevin Racapé on 07/10/2020.
//

#include <iostream>

int * fonction(int *pointeur)
{
    int *p;
    p = new int;
    
    p = pointeur;
//    std::cout << *p << std::endl;
    return p;
}

int main()
{
    int value;
    int * pointeur;

    
    std::cout << "Saisir une valeur : ";
    std::cin >> value;
    
    pointeur = fonction(&value);
    std::cout << *pointeur << std::endl;

    return 0;
}
