/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on March 19, 2014, 10:11 AM
 * Purpose: To create a menu
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short choose;
    //Prompt user for number of problem to execute
    cout<<"Choose from the following list:"<<endl;
    cout<<"1. Savitch 8th Edition Chapter 3 Problem 1"<<endl;
    cout<<"2. Gaddis 6th Edition Chapter 4 Problem 10"<<endl;
    cout<<"3. Deitel 7th Edition Chapter 2 Problem 23"<<endl;
    cout<<"4. Eckel 3th Edition Chapter 1 Problem 9"<<endl;
    cin>>choose;
    //Utilize switch to implement
    switch(choose){
        case 1:{
            cout<<"Place solution to 1 here!"<<endl;
            break;
        }
        case 2:{
            cout<<"Place solution to 10 here!"<<endl;
            break;
        }
        case 3:{
            cout<<"Place solution to 23 here!"<<endl;
            break;
        }
        case 4:{
            cout<<"Place solution to 9 here!"<<endl;
            break;
        }
    }

    return 0;
}

