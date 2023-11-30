//include headers and libraries
#include "Library.h"
#include <iostream>

using namespace std;
//implement class functions

//constructor
//sets all books to ""
Library::Library(){
    for(int i = 0; i < 10; i++){
        books[i] = "";
    }
}

bool Library:: addBook(string bookName){
    //check if book already exists
    for(int i = 0; i < 10; i++){
        if(books[i] == bookName){
            return false;
        }
    }
    //check if library is full
    for(int i = 0; i < 10; i++){
        if(books[i] == ""){
            books[i] = bookName;
            return true;
        }
    }
    return false;
}

bool Library:: removeBook(string bookName){
    for(int i = 0; i < 10; i++){
        if(books[i] == bookName){
            books[i] = "";
            return true;
        }
    }
    return false;
}

    

void Library:: print(){
    for(int i = 0; i < 10; i++){
        if(books[i] != ""){
            cout << books[i] << endl;
        }
    }
}