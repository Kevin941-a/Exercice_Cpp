//
//  main.cpp
//  while
//
//  Created by Kevin Racapé on 30/08/2020.
//  Copyright © 2020 Kevin Racapé. All rights reserved.
//

#include <iostream>

int main()
{
    int i{1};
    
    std::cout << "While loop \n";
    
    while (i <= 10)
    {
        std::cout << "Loop : " << i << std::endl;
        i++;
    }
    
    return 0;
}
