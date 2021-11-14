#include<stdio.h>
#include<iostream>
#include<string>
#include<cstring>
using namespace std;


int main()
{
int counter = 0;
int printed = 0;

bool loop = false;

cout << "enter the maximum number: ";
cin >> counter;
counter += 1;
loop = true;
while(loop == true)
{
cout << printed;
cout << "\n";
printed += 1;
counter -= 1;
if(counter == 0 or counter < 0)
{
loop = false;
}
}
}
