#include <iostream>
#include "Library.hpp"
#include"Book.hpp"
int main()
{
 int name;
 
Library myLibrary;
Book book;  
    Patron person("Joe", "shoe");
    Patron person1("Keith", "lee");
    Patron person2("Kanye", "West");
    Patron person3("Connor", "McGregor");
    
    myLibrary.addPatron(person);
    myLibrary.addPatron(person1);
    myLibrary.addPatron(person2);
    myLibrary.addPatron(person3);
    
    
   Book book1("How to Tame Your Dragon", "Rodney Davis", "12/23/2004", 2223);
   Book book2("forever", "Joel K.", "12/22/2022",2224);
   Book book3("Titus", "Baby G.", "11/23/1888", 2323);
   
  
    myLibrary.addBooks(book2);
    myLibrary.addBooks(book1);
    myLibrary.addBooks(book3);
    
    int option;
    do {
        std::cout << "\nMenu\n";
        std::cout << "1. Add Book\n";
        std::cout << "2. Show Books\n";
        std::cout << "3. Check Out\n";
        std::cout << "4. Check In\n";
        std::cout << "5. Show Patrons\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter your choice (1-5): ";
        std::cin >> option;

        switch (option) {
            case 1: {
                std::string titl, atr, pd;
                long long nub;
                std::cout << "What is the title of your book?\n";
                std::cin.ignore();
                std::getline(std::cin, titl);
                std::cout << "Who is the author of your book?\n";
                std::getline(std::cin, atr);
                std::cout << "What is the publication date of your book?\n";
                std::getline(std::cin, pd);
                std::cout << "What is the ISBN number of your book?\n";
                std::cin >> nub;
                Book book4(titl, atr, pd, nub);
                myLibrary.addBooks(book4);
                break;
            }
            case 2:
                std::cout << "Our Books: \n";
                myLibrary.showBooks();
                break;
            case 3: 
            {
                std::string first, last;
                std::string q;
                std::cout << "Is this your first time checking out a book? (yes/no)\n";
                std::cin >> q;
                if (q == "yes") {
                    std::cout << "You will now be added to the Patron's List\n";
                    std::cout << "What is your first name?\n";
                    std::cin >> first;
                    std::cout << "What is your last name?\n";
                    std::cin >> last;
                    myLibrary.addPatron(Patron(first, last));
                }
                std::cout <<"What is the ibsn of the book?: ";
                long long ibsn;
                std::cin >> ibsn;
                myLibrary.checkOut(ibsn);
                break;
            }
            case 4:
                std::cout <<"What is the ibsn of the book?: ";
                long long ibsn;
                std::cin >> ibsn;
                myLibrary.checkIn(ibsn);
                break;
            case 5:
                std::cout << "Our Patron's List\n";
                myLibrary.showPatrons();
                break;
            case 0:
                std::cout << "Have a nice day!\n";
                break;
            default:
                std::cout << "Not a valid selection. Try again...\n";
        }
    } while (option != 0);

    return 0;
}
