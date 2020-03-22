#include <iostream>
#include <string>
#include <cctype>



using namespace std;
int main()
{
 char oneChar;
 int alpha = 0;
 int digits = 0;
 int alnum = 0;
 int punct = 0;
 int space = 0;
 int print = 0;
 int up = 0;
 int low = 0;

 string str = "";
 int r = 0;
 bool run = true;
while (run){
 // your code should be here
 cout << "Do you want to continue to check a char? y/n "<<endl;
 
 
 getline(cin,str);
 if(str == "y")
 {
 	cout << "Enter a char: "<<endl;
 	getline(cin,str);
 	oneChar = str.at(0);
 	
 	if(isalpha(oneChar)){
 		alpha++;
 		cout << oneChar << " is an alphabet "<<endl;
 		}
 	if(isdigit(oneChar)){
 		digits++;
 		cout <<oneChar << " is a digit  "<<endl;
 		}
 	if(isspace(oneChar)){
 		space++;
 		cout << oneChar <<" is a space  "<<endl;
 		}
 	if(ispunct(oneChar)){
 		punct++;
 		cout << oneChar <<" is a punctuation  "<<endl;
 		}
 	if(isalnum(oneChar)){
 		alnum++;
 		cout << oneChar <<" is an alphanumeric "<<endl;
 		}
 	if(isupper(oneChar)){
 		up++;
 		cout << oneChar <<" is in uppercase  "<<endl;
 		}
 	if(islower(oneChar) ){
 		low++;
 		cout << oneChar <<" is in lowercase "<<endl;
 		}
 		
 	if(isprint(oneChar) ){
 		print++;
 		cout << oneChar <<" is printable"<<endl;
 		}
 }
 else
 {
 	run = false;
 }
 


 }// end of the while loop
//Output the counts
 cout << "Total of: " << endl;
 cout << "alphabets: " << alpha << endl;
 cout << "digits: " << digits << endl;
 cout << "alphanumeric: " << alnum << endl;
 cout << "punctuation: " <<  punct << endl;
 cout << "space: " <<space << endl;
 cout << "printables: " <<print  << endl;
 cout << "lowercase: " << low << endl;
 cout << "uppercase: " << up << endl;
}
