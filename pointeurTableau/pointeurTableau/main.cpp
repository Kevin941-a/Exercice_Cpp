//
//  main.cpp
//  pointeurTableau
//
//  Created by Kevin Racapé on 09/10/2020.
//

#include <iostream>
#include <array>

int main()
{
    std::array<int, 4> tableau{2, 3, 4, 5};
    int * pointeur;
    
//    for (int element : tableau)
//    {
//        std::cout << element << std::endl;
//    }
    
    pointeur = tableau.data();
    
    
    for (int index = 0; index < tableau.size(); ++index)
    {
        std::cout << *(pointeur + index) << std::endl;
    }
    
    
    return 0;
}
