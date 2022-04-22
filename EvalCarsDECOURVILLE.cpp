// EvalCarsDECOURVILLE.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>
#include "Person.h"
#include "Color.h"
#include "Car.h"

using namespace std;



int main()
{
    Car peugeot = Car("Citroen", "C4", 2, 0, 5000);
    Car renault = Car("Renault", "Clio", 16, 1600, 150);

    Person cassy = Person("Cassy", "Moulama", "23 avril 1975", 15000, "une femme");
    Person joe = Person("Joe", "Pouleton", "10 mars 2015", 3, "un homme");

    cassy.Introduce(peugeot);

    cout << endl; 

    joe.Introduce(renault);
    
    
    
    
    
}

