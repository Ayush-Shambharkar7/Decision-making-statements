//Ayush Shambharkar
//23070123034
//Aim - create a calculator to perform some of the arithmetic operation.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your Arthmetic choice: \n1)Addition\n2)Subtraction\n3)Multiplication\n4)Division"<<endl;
    cin>>n;

    switch (n)
    {
    case 1:
    int sum,a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    sum = a+b;
    cout<<sum;
        break;

    case 2:
    int diff,c,d;
    cout<<"Enter two numbers: ";
    cin>>c>>d;
    diff = c-d;
    cout<<diff;
        break;

    case 3:
    int product,e,f;
    cout<<"Enter two numbers: ";
    cin>>e>>f;
    product = e*f;
    cout<<product;
        break;

    case 4:
    int divide,g,h;
    cout<<"Enter two numbers: ";
    cin>>g>>h;
    divide = g/h;
    cout<<divide;
        break;

    default:
    cout<<"Wrong input";
        break;
    }
}

/*
OUTPUT
Enter your Arthmetic choice: 
1)Addition
2)Subtraction
3)Multiplication
4)Division

1
Enter two numbers: 5
4
9

Enter your Arthmetic choice: 
1)Addition
2)Subtraction
3)Multiplication
4)Division
2
Enter two numbers: 5
4
1


Enter your Arthmetic choice: 
1)Addition
2)Subtraction
3)Multiplication
4)Division
3
Enter two numbers: 5
5
25



Enter your Arthmetic choice: 
1)Addition
2)Subtraction
3)Multiplication
4)Division
4
Enter two numbers: 6
2
3
*/
