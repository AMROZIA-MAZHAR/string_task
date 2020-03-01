/*Write a program that can be used to train the user to use less gender baised language by
suggesting alternative versions of sentences given by the user. The program will ask for a
sentence, read the sentence into a string variable, and replace all occurrences of masculine
pronouns with gender-neutral pronouns. For example, it will replace "he" with "she or he".
Thus, the input sentence.
See an adviser, talk to him, and listen to him.
should produce the following suggested changed version of the sentence:
See an adviser, talk to her or him, and listen to her or him.
Be sure to preserve uppercase letters for the first word of the sentence. The pronoun "his"
can be replaced by "her (s)"; your program need not decide between "her" and "hers".
Allow the user to repeat this for more sentences until the user says she or he is done.
This will be a long program that requires a good deal of patience. Your program should not
replace the string "he" when it occurs inside another word, such as "here". A word is any
string consisting of the letters of the alphabet and delimited at each end by a blank, the end
of the line, or any other character that is not a letter. Allow your sentences to be up to 100
characters long.*/

#include<iostream>
#include<string>
using namespace std;
string get_input();
string conversion(string);

string get_input(){
	 string my_string;
    cout<<"Enter the string you want to replace "<<endl;
    getline(cin,my_string);
    return my_string;
}

string conversion(string my_string){
	string cmp;
	string new_string;
	for(int i=0;i<=my_string.length();i++){
		if(my_string[i] ==' ' || int(my_string[i])==0)
        {
		if(cmp=="he"||cmp=="she"||cmp=="He"||cmp=="She"){
		   if(char(cmp[0])>='a'&&(cmp[0])<='z')
                new_string=new_string+" she or he";
                if(char(cmp[0])>='A'&&(cmp[0])<='Z')
                new_string=new_string+" She or He";
                cmp.erase();
                if(int(my_string[i])==0)
                {
                    return new_string;
                }
             
		}
		 else if(cmp == "him" || cmp== "her" || cmp== "Her" ||cmp== "Him")
                {
                    if(char(cmp[0])>='a'&&(cmp[0])<='z')
                    new_string=new_string+" her or him";
                    if(char(cmp[0])>='A'&&(cmp[0])<='Z')
                    new_string=new_string+" Her or Him";
                    cmp.erase();
                    if(int(my_string[i])==0)
                    {
                        return new_string; 
                    }
                }
		  else if(cmp== "his" || cmp== "her" || cmp== "Her" || cmp== "His")
                {
                    if(char(cmp[0])>='a'&&(cmp[0])<='z')
                    new_string=new_string+" her or his";
                    if(char(cmp[0])>='A'&&(cmp[0])<='Z')
                    new_string=new_string+" Her or His";
                    cmp.erase();
                    if(int(my_string[i])==0)
                    {
                      return new_string;
                    }
                }
                else if (cmp == "himself" || cmp== "herself" || cmp== "Herself" || cmp== "Himself")
                {
                    if(char(cmp[0])>='a'&&(cmp[0])<='z')
                    new_string=new_string+" herself or himself";
                    if(char(cmp[0])>='A'&&(cmp[0])<='Z')
                    new_string=new_string+" Herself or Himself";
                    cmp.erase();
                    if(int(my_string[i])==0)
                    {
                      return new_string;
                    }
                }
                else
                {
                 new_string=new_string+' '+cmp;
                 cmp.erase();
                }                
	}
	 else
      {
   	cmp=cmp+my_string[i];
     }
   }
}
int main(){
	string first_string=get_input();
	//conversion(my_string);
	string converted_string=conversion(first_string);
	cout<<"after conversion: "<<converted_string<<endl;;
	return 0;
}
