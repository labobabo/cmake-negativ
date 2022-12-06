#include "revpart.h"

using namespace std; 
int main() 
{ 
    string *sent = new string; 
    cout << "Enter string: "; 
    getline (cin, *sent);
    bool checking_result = check_string(*sent);
    if ( checking_result == true )
    {
    	cout << "Reversing sentensis: " << reverse(*sent) << endl;	
    }
    
    else if ( checking_result == false )
    {
    	cout << ("\033[31mYou write wrong message , try again. " ) << endl;
    }
    delete sent;
}
