/*Write a program that reads in a line of text and outputs the line with all the digits in all
integer numbers replaced with 'x'. For example,
Input:
My userID is john17 and my 4 digit pin is 1234 which is secret.
Output:
My userID is john17 and my x digit pin is xxxx which is secret.
Note that if a digit is part of a word, then the digit is not changed to an 'x'. For example,
note that john17 is NOT changed to johnxx. Include a loop that allows the user to repeat
this calculation again until the user says she or he wants to end the program.*/

#include<iostream>
using namespace std;
int main(){
	string str;
	char ans='Y';
	cout<<"Enter a string: ";
	getline(cin,str);
	cout<<endl;
	cout<<"Input string is: "<<str<<endl;
	
	for(int i=0;i<=str.length();i++)
	{
		
        if(isdigit(str[0])){
		
            str.at(i) = 'x';
          	do
			{
				str.at(i)='x';
				i++;
			}
			while(!isdigit(str[i]));

        }
       	if (str[i] == ' ')
		{
			i++;
			while(isdigit(str[i]))	
			{
				str.at(i)='x';
				i++;
			}
		}
		
	}
	cout<<"after conversion:"<<str<<endl;
		
	}
