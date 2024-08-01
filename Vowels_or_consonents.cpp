#include<iostream>
using namespace std;

int main(){
    char alphabet;
    cout << "enter a alphabet:";
    cin >> alphabet;
    
    if (!isalpha(alphabet))
    {
        cout << "please enter a valid alphabet";
    }
    else if (alphabet=='a' || alphabet=='e' || alphabet=='i' || alphabet=='o' || alphabet=='u' || alphabet=='A' || alphabet=='E' || alphabet=='I' || alphabet=='O' || alphabet=='U' )
    {
        cout << alphabet << " is a vowels";
    }else{
        cout << alphabet << " is a consonant";
    }

    return 0;
}

/*
OUTPUT
enter a alphabet:A
A is a vowels

enter a alphabet:F
F is a consonant
*/
