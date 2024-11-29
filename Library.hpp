#ifndef LIBRARY_HPP
#define LIBRARY_HPP
#include "Book.hpp"
#include "Patron.hpp"
#include <string>
#include<iostream>
#include<vector>

class Library
{
private:

  std::vector < Book > books;
  std::vector <Patron> ppl;
  Patron firstN, lastN;
public:
    Library ();
    Library (const Book & bbooks, const Patron & firstN, const Patron& lastN);
   ~Library ();


  void addBooks (Book & book);
  void checkIn (const long long& ibsn);
  void checkOut (const long long& ibsn);
  void showBooks ();
  void addPatron(const Patron& guy);
  void showPatrons();

};

#endif // LIBRARY_HPP
