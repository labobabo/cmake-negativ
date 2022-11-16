#include <string> 
#include <iostream>

using namespace std; 
string bar(string s) 
{   string error;
	for (int it = 0; it < s.length(); )
	{
		if (s[it]>='A' && s[it] <= 'Z' || s[it] >= 'a' && s[it] <= 'z' || s[it] == ' '){it++;}
		else 
		{
		 s = "error";
		 return s; 		
		 exit(0);
		}
	}
	
	if (s.length() >=50)
	{
		s = "long";
		return s; 		
		exit(0);
	}
	else
	{
    for (int i = 0; i < (s.length() / 2); ++i) 
    { 
        int tmp = s[i]; 
        s[i] = s[s.length() - 1 - i]; 
        s[s.length() - 1 - i] = tmp;    
    }       
return s;
}    
}
