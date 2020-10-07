//
//  main.cpp
//  pointeur
//
//  Created by Kevin Racapé on 05/10/2020.
//

#include <iostream>

void addition(int value, int valeur, int *pointeur)
{
    *pointeur = value + valeur;
}

int main()
{
    
    int value{45}, result, variable{10};
    int *pointeur;
    
    pointeur = &result;
    addition(value, variable, pointeur);
    
    std::cout << result << std::endl;
    
    return 0;
}
