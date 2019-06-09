#include <iostream>

using namespace std;

struct Books {

    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

void printBook(struct Books *book);
int main() {

    
    struct Books Book1;
     struct Books Book2;

    strcpy(Book1.title, "C++ Introduction to Computing");
    strcpy(Book1.author, "Chaud asghsdf");
    strcpy(Book1.subject, "C++");
    Book1.book_id = 16490407;

    strcpy(Book2.title, "java Introduction to Computing");
    strcpy(Book2.author, "wembo");
    strcpy(Book2.subject, "C++");
    Book2.book_id = 1649407;

    // print tthe result of boo1 entry

    printBook( &Book1);

    printBook( &Book2);


    return 0;
}

void printBook( struct Books *book){
    cout <<"Book Title   : " << book -> title  << endl;
    cout <<"Book author  : " << book -> author << endl;
    cout <<"Book subject : " << book -> subject << endl;
    cout <<"Book id      : " << book -> book_id << endl;
}