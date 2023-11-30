//include headers and libraries
#include "Library.h"
#include <iostream>

using namespace std;
//implement class functions

int main(){
    Library library;
    string command;
    string bookName;
    while(true)
    {
        cout<<"Enter command: ";
        cin>>command;
        if(command == "add")
        {
            cin>>bookName;
            if(library.addBook(bookName))
            {
                cout<<"Book added"<<endl;
            }
            else
            {
                cout<<"Book already exists or library is full"<<endl;
            }
        }
        else if(command == "remove")
        {
            cin>>bookName;
            if(library.removeBook(bookName))
            {
                cout<<"Book removed"<<endl;
            }
            else
            {
                cout<<"Book does not exist"<<endl;
            }
        }
        else if(command == "print")
        {
            library.print();
        }
        else if(command == "quit")
        {
            break;
        }
        else
        {
            cout<<"Invalid command"<<endl;
        }
    }
    //ask for commands and execute

}
