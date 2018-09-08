#include <string>

using namespace std;

int main ()
{
    string word1;
    string word2;

    std::cout<<"What is your first word"<<"\n"; // This will print out the address of the pointer a
    cin>>word1;
    std::cout<<"What is your second word"<<"\n"; //This will print out the address of the pointer b
    cin>>word2;

    if (word1.length() > word2.length()) {cout<<"Your first word is longer";}
    else if (word2.length() > word1.length()) {cout<<"Your second word is longer";}
    else if (word1.length() == word2.length()) {cout<<"Words are same length!";}
}