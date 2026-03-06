#include <iostream>
using namespace std;

#include "heap.h"

void heapadd(){
    //"this means your program should be able to handle both input methods"
    cout << "============================================================" << endl;
    cout << "Enter " << endl; 
    cout << "-----" << endl; //(1-1000)
    cout << "1 : Enter a number (Up to 100 numbers total)" << endl;
    cout << "--------------------------------------------" << endl;
    cout << "2 : Automatically add numbers from file" << endl;
    cout << "============================================================" << endl;
    
    bool addcheck = true;
    while (addcheck){
        int choice;
        cout << "What is your choice?: ";
        cin >> choice; 
        
        if (choice == 1){
            // Code to allow user to enter values up to 100 numbers
            addcheck = false;
        }
        else if (choice == 2){
            // Code to automatically add numbers from file
            addcheck = false;
            char numbers[100];
	    cout << "What is your filename (x.txt)?:";
	    string filename;
	    cin >> filename;
	    //Code to pick numbers from filename
        }
        else{
            cout << "Numbers 1-2 only" << endl;
        }
    }
}

void heapremove(){
    //"this means your program should be able to handle both input methods"
    cout << "============================================================" << endl;
    cout << "Enter " << endl; 
    cout << "-----" << endl; //(1-1000)
    cout << "1 : Remove the head" << endl;
    cout << "--------------------------------------------" << endl;
    cout << "2 : Remove all" << endl;
    cout << "============================================================" << endl;
    
    bool removecheck = true;
    while (removecheck){
        int choice;
        cout << "What is your choice?: ";
        cin >> choice; 
        
        if (choice == 1){
            // Code to remove head
        }
        else if (choice == 2){
            // Code to delete all numbers
        }
        else{
            cout << "Numbers 1-2 only" << endl;
        }
    }
}

void heapprint(){
    
    cout << "Heap Printing" << endl;
    
}

int main()
{
  bool running = true;
  while(running){
    cout << "============================================================" << endl;
    cout << "Enter" << endl;
    cout << "-----" << endl;
    cout << "1 : Add numbers" << endl;
    cout << "--------------------------------------------" << endl;
    cout << "2 : Remove numbers" << endl;
    cout << "--------------------------------------------" << endl;
    cout << "3 : Print numbers" << endl;
    cout << "--------------------------------------------" << endl;
    cout << "4 : Quit program" << endl;
    cout << "============================================================" << endl;
    int choice;
    cin >> choice;

    if (choice == 1){
      heapadd();
    }
    else if (choice == 2){
      heapremove();
    }
    else if (choice == 3){
      heapprint();
    }
    else if (choice == 4){
      running = false;
    }
    else{
      cout << "Invalid input. Numbers 1-4 only." << endl;
    }
  }
  return 0;
}
