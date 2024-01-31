

#include <iostream>
using namespace std;
#include <string>
#include "Adress.h"
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

int main()
{

    Adress a1 = Adress("st", "di", "do", 9090);
    Adress a2 = Adress("ti", "da", "vidish", 8080);

    Package p1 = Package(10, 2, a1, a2);

    Package p2 = TwoDayPackage(11, 3, a1, a2);
    
    
    p1.getInfo();
    p2.getInfo();

    






}
