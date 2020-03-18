//Nancy Ng 
//Nancy.ng28@myhunter.cuny.edu 
// Genady Maryash 
// lab 4A: box.cpp 




#include <iostream>
#include <fstream> 
#include <iomanip>
#include <cmath>

using namespace std; 

int main() 
{ 

    int width;  
    int height; 

    cout<< "Input width"; //user input widith
    cin>>width; 

    cout <<"input height"; //user input height
    cin>>height; 

    cout <<"Shape:"<<endl; 

    for (int row=1; row<=height; row++) //i should be less than 
    { 
        for (int col =1; col<=width; col++)
        { 
            cout << "*";
        }

        cout <<endl; 
    }

    return 0; 
    /* example: if width is 7 and height is 4 
    range width: <=7 
    range height <=4
    step 1: if row is 1, and col is 1. row is less than height 4, and col is less than width 7 so it prints out * 
    step 2: if row is 1, and col is 2. row is less than height 4, and col is less than width 7 so it prints out * 
    step 3: if row is 1, and col is 3. row is less than height 4, and col is less than width 7 so it prints out * 
    step 4: if row is 1, and col is 4. row is equal to height 4 and col is less than width 7 so it prints out * 
    step 5: if row is 2, and col is 1. row is less than height 4 and col is less than width 7 so it prints out * 
    keep going until for loop is done. 
    */ 




}