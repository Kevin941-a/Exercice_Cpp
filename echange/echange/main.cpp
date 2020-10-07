//
//  main.cpp
//  echange
//
//  Created by Kevin Racapé on 07/10/2020.
//

#include <iostream>

void swap(int *valueA, int *valueB)
{
    int temp = *valueA;
    *valueA = *valueB;
    *valueB = temp;

}

int main()
{
    int x, y;
    
    std::cout << "Saisir 2 entiers : " << std::endl;
    std::cin >> x;
    std::cin >> y;
    std::cout << std::endl;
    
    std::cout << "X = " << x << " Y = " << y << std::endl;
    std::cout << std::endl;
    swap(&x, &y);
    std::cout << "X = " << x << " Y = " << y << std::endl;
    std::cout << std::endl;
    
    return 0;
}
