//#include <iostream>
//#include <string>
//using namespace std;
//const int MAX_BOOKS = 100;
//class Book 
//{
//private:
//    string title;
//    string author;
//    int publicationYear;
//
//public:
//    Book()
//    {
//        title = "";
//        author = "";
//        publicationYear = 0;
//    }
//   
//    Book(string t, string a, int p) 
//    {
//        title = t;
//        author = a;
//        publicationYear = p;
//    }
//   
//    string getTitle()
//    {
//        return title;
//    }
//    string getAuthor()
//    {
//        return author;
//    }
//    int getPublicationYear()
//    {
//        return publicationYear;
//    }
//};
//class Library 
//{
//private:
//    Book books[MAX_BOOKS];
//    int numBooks;
//public:
//    Library()
//    {
//        numBooks = 0;
//    }
//    void addBook(Book book) 
//    {
//        if (numBooks >= MAX_BOOKS)
//        {
//           cout << "Error: library is full" << endl;
//            return;
//        }
//        books[numBooks] = book;
//        numBooks++;
//    }
//    void displayBooks()
//    {
//        for (int i = 0; i < numBooks; i++)
//        {
//            cout << books[i].getTitle() << " by " << books[i].getAuthor() << " (" << books[i].getPublicationYear() << ")" << endl;
//        }
//    }
//};
//int main()
//{
//    Book book1("Fundamentals of Programming", "Muhammad Hassaan", 2019);
//    Book book2("OOP Basics", "Samer Junaid", 2020);
//    Book book3("Mujhe kch nhi ata", "Zohaib Rashid", 2004);
//    Library library;
//    library.addBook(book1);
//    library.addBook(book2);
//    library.addBook(book3);
//    library.displayBooks();
//    return 0;
//}