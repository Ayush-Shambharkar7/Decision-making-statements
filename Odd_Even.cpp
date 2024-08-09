//Ayush Shambharkar
//23070123034
//Aim - take a random number from user and check wheter the number is even of odd.

#include<iostream>

using namespace std;
int main(){
    int n;
    cout << "enter a number:";
    cin >> n;
    if (n%2==0)
    {
        cout << "this is a even number";
    }else{
        cout << "this is a odd number";
    }
    return 0;
}

/*
OUTPUT
enter a number:45
this is a odd number

enter a number:44
this is a even number
*/
