//Write a program that prompts the user to input a string and outputs the string in uppercase letters.
#include<iostream>
#include<cctype>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){

      string  str;
      cout<<"enter the input:"<<endl;
      getline(cin,str);
      cout<<endl;
      for(int i=0;i<str.size();i++)
      {
     	putchar(toupper(str[i]));
	  }



}
