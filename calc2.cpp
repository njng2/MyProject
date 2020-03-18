/* Nancy Ng 
Project 1C
Instructor: 
January 31st 2020
writing a program that adds the sum of positive and 
negative numebrs. if a number is positive, you add. if negative,
you subtract. 

*/ 


#include <iostream> 
using namespace std; 
#include <fstream> 
int main() 
{ 
    int s;//input
    int t; //total
    char u;// + or -
    cin >> t; //your total is initially 0, and when you read the first digit, that first nunmber is the total
    

    while (cin >> u) //reading a symbol first before you add or subtract. if you have 5;, it's technically +5. 
    { 
        if (u == '+' )
        { 
            cin>>s; //read the next number in s; 
            t+=s;
        }

        if (u == '-')
        { 
           cin >> s;//reading the next number after t
           t-=s; 
            
        }

        if (u==';')
        { 
            cout << t<< endl; //ending the loop after your first list of numbers
            cin>>t; 
        }


    }

    return 0; 

}
