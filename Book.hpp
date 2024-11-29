#ifndef BOOK_HPP
#define BOOK_HPP
#include <string>

class Book
{
private:
    std::string name;
    std::string author;
    std::string pubDate;
    long long ibsn;
    bool available=false;
public:
    Book();
    
    Book(const std::string& name, const std::string& author, const std::string& pubDate, long long ibsn);
    

    ~Book();
    
void setName(std::string nme){name=nme;}
std::string getName(){return name;}

void setAuthor(std::string aut){author=aut;}
std::string getAuthor(){return author;}

void setPubDate(std::string pDate){pubDate=pDate;}
std::string getPubDate(){return pubDate;}

void setIbsn(long long isb){ibsn=isb;}
long long getIbsn(){return ibsn;}

void setAvailable(bool avail){available=avail;}
bool getAvailable(){return available;}

};

#endif // BOOK_HPP
