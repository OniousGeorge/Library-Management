#include "Patron.hpp"
#include <string>

Patron::Patron()
{
    firstN="N/A";
    lastN="N/A ";
    
}

Patron::Patron(std::string firstNn, std::string lastNn)
{
    firstN=firstNn;
    lastN=lastNn;
}


Patron::~Patron()
{
}


