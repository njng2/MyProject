/* Nancy Ng 
Project 1D
Instructor: 
February 7th 2020 

*/ 


#include <iostream> 
using namespace std; 
#include <fstream> 
#include <cmath> 
int main() 
{ 
    int num;//input numbers 
    int total = 0; //total
    char before = '+'; // + or -
    char after;
    cin >> num; //reading the first number as t. if your first number is just 15, then t is 15. 
    

    while (cin >> after) //reading your after operator ^
    {   
        if (after == '^')// if the operator after your num is a ^, then you square that num
        { 
            cin>>after;
            num = num * num;// squares the num if you see a ^ 
        }

        if (before == '+')// if the operator BEFORE the first num is positive, then you add 
        { 
            total +=num;
        }
        else if (before == '-')//if the operator BEFORE the first num is negative, then you subtract
        { 
            total-=num;
        }


       /*example: 10^ - 20 -5^
       // your before operator is + because you have a positive number, and your first num is 10, and your after operator is ^
       //your num is now 100, your total is 0 and your FIRST after operator is -. 
       //your new cin>>num is now 20, and OUR FIRST after operator, is now your BEFORE operator for this step, which is + 
       // so your new cin>>num=20 and your old num= 100, new total is 80, your after operator is now - 
       // your before operator is now the after operator from the last step. so, your new cin>>num is 5, your before operator is - and
          your after operator is now ^. so your new num is 25 and your total is 55.     
       */
        before = after; 
        cin>>num; 
        
        if (after == ';')
        { 
            cout << total<< endl; //ends the line with the semicolon 
            before = '+'; //when your while loop ends, you go back to the first number which is always positive
            total = 0; //your new line total is 0. this will reset the loop for the next line. 
        }
        



    }



    return 0; 

}
