//
//  main.cpp
//  Personnage
//
//  Created by Kevin Racapé on 23/10/2020.
//

#include <iostream>
#include <string>

class Personnage
{
public:
    Personnage(std::string newNom, std::string newType): nom(newNom), type(newType) {}
    virtual void affiche()
    {
        std::cout << "Je suis " << nom << std::endl;
    }
    
private:
    std::string nom{};
    std::string type{};
};

class Magicien : public Personnage
{
public:
    Magicien(std::string newNom, std::string newType): Personnage(newNom, newType) {}
    void affiche() override
    {
        std::cout << "Je suis magicien" << std::endl;
    }
    
    void affiche2()
    {
        std::cout << "Je suis magicien affiche2" << std::endl;
    }
};

class Elfe : public Personnage
{
public:
    Elfe(std::string newNom, std::string newType): Personnage(newNom, newType) {}
    void affiche() override
    {
        std::cout << "Je suis un elfe" << std::endl;
    }
    
};

void foo(Personnage& exemple)
{
    exemple.affiche();
}


int main()
{
    Personnage kevin("Kevin", "Magicien");
    Magicien ranga("Ranga", "Magicien2");
    Elfe toto("toto", "Elfe");
//    kevin.affiche();
//    ranga.affiche();
    
//    foo(kevin);
    
//    foo(ranga);
    foo(toto);
    
    return 0;
}
