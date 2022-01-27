// Palindrome/main.cpp
// BODIN Maxime
// 27/01/2022

#include <iostream>
#include <string>
#include "typeDef.h"
#include "functions.h"
using namespace std;

int main()
{
    int testInt=0; string test = "test";
    for (int i=0; i < test.length(); i++)
    {
        testInt += test[i];
        cout << testInt << '\n';
    }

    List* aList = new List;
    bool isPalindrome = false;
    string aWord;


    cout << "Enter the word : " << '\n';
    getline(cin,aWord);
    
    for(int i=0; i < aWord.length(); i++)
        if(aWord[i] != aWord[aWord.length()-1])
            break;
        else
            isPalindrome = true;

    if(isPalindrome){
         cout << "Is palindrome : " << aWord << '\n';
         if(isValid(aList,aWord)){}
         else{putAPalindrome(aList,aWord);}
    }
    else
        cout << "Is not palindrome : " << aWord << '\n';

    printListOfPalindromes(aList);

    return 0;
}