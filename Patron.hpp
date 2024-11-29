#ifndef PATRON_HPP
#define PATRON_HPP
#include <string>

class Patron
{
private:
    std::string firstN;
    std::string lastN;
public:
    Patron();
    
    Patron( std::string firstN, std::string lastN);
    
    ~Patron();
    
void setfName(std::string fnme){firstN=fnme;}
std::string getfirstN(){return firstN;}

void setlastN(std::string lnme){lastN=lnme;}
std::string getlastN(){return lastN;}



};

#endif // PATRON_HPP
