#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    if (towar == 0)
        return 0;

    Stocznia     stocznia{};
    unsigned int zaglowce = 0;
    unsigned int a        = 0;

    while (a < towar) {
        Statek*      s1 = stocznia();        
        unsigned int b  = s1->transportuj(); 
        a += b;

        if (dynamic_cast< Zaglowiec* >(s1)) {
            ++zaglowce;
        }

        delete s1; 
    }

    return zaglowce;
}
