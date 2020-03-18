/*
Nancy Ng 
Instructor: Jaspal Singh 
March 8th 2020 
Lab 6B- Cipher Disk
*/



#include <iostream> 
#include <string>
#include <cstring>
#include <fstream>
#include <cstdlib>
using namespace std;
char shiftChar (char c , int rshift)
{ 
    if (rshift>=0 || rshift<=25)
    { 
        if (c>='A'&& c<='Z') //if character c is in between A and Z 
        { 
            if ((c+rshift) > 'Z')
            { 
                c = char(int(c)+rshift-26);  //if character + shift is greater than Z, which results to a symbol, subtract 26 to wrap back to A
                
            }
            
            else
            { 
                c = char(int(c) + rshift); 
                

            }
     
        }

        if (c>='a'&& c <='z')//if character c is in between a and z 
        { 
            if ((c+rshift)>'z') 
            { 
                c = char(int(c)+rshift-26);//if character + shift is greater than Z, which results to a symbol, subtract 26 to wrap back to A
            }
            
            else 
            { 
                c = char(int(c) + rshift);  
                

            }

        }

    }

    return c; 
    


}

string encryptCaesar(string plaintext, int rshift)
{ 
    string shifted_string = "";
    int length = plaintext.length(); 

    for (int i = 0; i<length; i++)
    { 
        shifted_string = shifted_string + shiftChar(plaintext[i], rshift); //calls char function above with plaintext and rshift 

    }

    return shifted_string; 
}


int main() 
{
    string words; //declaring input as a string; 
    int shift_right; //declaring integers for the shift. 

    cout << "Input "; 
    getline(cin,words); //takes everything in the string, including spaces 
    cout<<"Enter shift: "; 
    cin>>shift_right; 

    cout<<encryptCaesar(words, shift_right)<<endl; //calls outputs string function above
    //with words and shift_right here. string function calls char function. 
    return 0; 
}