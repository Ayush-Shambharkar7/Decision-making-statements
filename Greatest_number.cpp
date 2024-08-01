#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter the value of a, b, and c: ";
    cin >> a >> b >> c;

    if (a > b) {
        if (a > c) {
            cout << "a is the largest value";
        } else {
            cout << "c is the largest value";
        }
    } else {
        if (b > c) {
            cout << "b is the largest value";
        } else {
            cout << "c is the largest value";
        }
    }

    // if (a > b && a>c)
    // {
    //     cout << " a is the largest number ";
    // }
    // else if (b > a && b > c)
    // {
    //     cout << " b is the larget number";
    // }else{
    //     cout << "c is the largest number";
    // }

    return 0;
}


/*
OUTPUT
Enter the value of a, b, and c: 4 5 6
c is the largest value

Enter the value of a, b, and c: 7 8 1
b is the largest value

Enter the value of a, b, and c: 9 4 6
a is the largest value
*/