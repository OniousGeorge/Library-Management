#include "Book.hpp"
#include <string>

Book::Book()
{
    name=" ";
    author=" ";
    pubDate= " ";
    ibsn=0;
    
}

Book::Book(const std::string& ne, const std::string& at, const std::string& date, long long is)
{
    name=ne;
    author=at;
    pubDate=date;
    ibsn=is;
}

/*Book::Book(const Book& t)
 {
    name=t.name;
    author=t.author;
    pubDate=t.pubDate;
    ibsn= t.ibsn;
 }
*/
Book::~Book()
{
}



