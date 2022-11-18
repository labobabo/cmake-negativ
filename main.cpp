#include <iostream>
#include <string>
#include <stdio.h>
#include "zag.h"

using namespace std; 
int main() 
{ 
    string sent; 
    cout << "Enter string: "; 
    getline (cin, sent);
    string result = bar(sent);
    if (result == "error" || result == "long") 
     {
     	cout << ("\033[31mYou write wrong message , try again. " )<< endl;
     } 
     else
     {
     	cout << "After Revers: " << result << endl; 
     }
}
