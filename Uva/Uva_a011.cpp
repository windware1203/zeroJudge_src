#include <bits/stdc++.h>
using namespace std;
int main()
{
	string buffer;
	//char* delim = " ";
	char* pch;
	while(getline(cin,buffer))
	{
		char str[1500];
		strcpy(str,buffer.c_str());
		int tmp = 0;
		pch = strtok(str," 1234567890@#$%^&*()_+!~.-=`{}\][/><?;:");
 		while (pch != NULL)
  		{
  			tmp++;
    		
    		pch = strtok (NULL, " 1234567890@#$%^&*()_+!~.-={}`\][/>;:<?");
  		}  
		cout<<tmp<<'\n';
	}
 	return 0;
}