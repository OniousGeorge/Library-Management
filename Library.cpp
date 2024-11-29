#include "Library.hpp"

Library::Library()
{
}

 Library::Library(const Book& books, const Patron& firstN, const Patron& lastN) 
{
 
}
 
Library::~Library()
{
}

void Library::addBooks(Book& book) {
       books.push_back(book);
      
    // std::cout << "added to the library" << std::endl;
        }
    
void Library::checkOut(const long long& ibsn)
{
    for( auto& Book : books) {
 
    if (ibsn==Book.getIbsn() && Book.getAvailable()==true)
    {
        std::cout << "This book is already checked out" << std::endl;
    }else if(ibsn==Book.getIbsn() && Book.getAvailable()==false)
    {
        Book.setAvailable(true);
        std::cout << "You have checked out " << Book.getName() << std::endl;
        
    } //else if (ibsn!=Book.getIbsn()){
       // std::cout << "The Library does not have a book with that ibsn" << std::endl;
    } 
}


void Library::checkIn(const long long& ibsn)
{
    
    for( auto& Book : books) {
    
    if(ibsn==Book.getIbsn() && Book.getAvailable()==true)
    {
        Book.setAvailable(false);
        std::cout << "You have checked in " << Book.getName() << std::endl;
        
    } else {
        std::cout << "Book not found" << std::endl;
        break;
    }

}
}
void Library::showBooks()
{
    if(books.empty())
    {
        std::cout << "Library is empty" << std::endl;
    }else {
    for( auto& Book : books) {
        std::cout << Book.getName() <<" By: " <<Book.getAuthor() << " Pub Date: " << Book.getPubDate()<< " ISBN: " << Book.getIbsn() <<std::endl;
    }
}
}

void Library::addPatron(const Patron& guy)
{
       ppl.push_back(guy);
      
    // std::cout << "added to the library" << std::endl;
        

    
}

void Library::showPatrons()
{
    if(ppl.empty())
    {
        std::cout << "no one is on the patron list" << std::endl;
    }else {
    for( auto& Patron : ppl) {
        std::cout << Patron.getfirstN() << " " <<Patron.getlastN() << std::endl;
    }
}
}
