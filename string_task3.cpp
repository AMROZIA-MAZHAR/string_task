/*Write a program that reads in a line of text and replaces all four-letter words with the word
“love”. For example, the input string
I hate you, you dodo!
should produce the output
I love you, you love!
Of course, the output will not always make sense. For example, the input string
John will run home.
should produce the output
Love love run love.
If the four-letter word starts with a capital letter, it should be replaced by "Love", not by
"love". You need not check capitalization, except for the first letter of a word. A word is
any string consisting of the letters of the alphabet and delimited at each end by a blank, the
end of the line, or any other character that is not a letter. Your program should repeat this
action until the user says to quit.*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
string str1;
int word_length = 0;

cout << " Enter a string:\n""\n";
getline(cin, str1);

int strL = str1.length();
for(int i = 0; i < strL; i++)
{
char item = str1[i];

if(item != ' ')

word_length++;

else if(item = ' ')
{
if(word_length == 4)
{
str1[i-4] = 'l';

str1[i-3] = 'o';

str1[i-2] = 'v';

str1[i-1] = 'e';

}
word_length = 0;
}
else if(item = '\n');
item = ' ';
}
cout << str1 << endl;

return 0;
}

