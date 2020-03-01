/* Write a function that determines if two strings are anagrams. The function should not be
case sensitive and should disregard any punctuation or spaces. Two strings are anagrams
if the letters can be rearranged to form each other. For example, “Eleven plus two” is an
anagram of “Twelve plus one.” Each string contains one “v”, three “e’s”, two “l’s”, etc.
Test your function with several strings that are anagrams and non-anagrams. You may use
either the string class or a C-style string*/

#include<iostream>
using namespace std;
void build_histogram(int letters[], string s);
void build_histogram(int letters[], string s)
{
for (int i = 0; i < 26; i++)
letters[i] = 0;
for (int i = 0; i < s.length(); i++)
{
char c = toupper(s[i]);
if (isalpha(c))
{
int index = static_cast<int>(c) - static_cast<int>('A');
letters[index]++;
}
}
}
int main( )
{
string s1, s2;
int letter_histogram1[26], letter_histogram2[26];
cout << "Enter two strings." << endl;
getline(cin, s1);
getline(cin, s2);
build_histogram(letter_histogram1, s1);
build_histogram(letter_histogram2, s2);
// If histograms are identical they are anagrams
for (int i = 0; i<26; i++)
{
if (letter_histogram1[i] != letter_histogram2[i])
{
cout << "They are not anagrams." << endl;
char wait;
cin >> wait;
return 0;
}
}
cout << "They are anagrams!" << endl;
cout << "Enter a character to exit." << endl;
char wait;
cin >> wait;
return 0;
}

