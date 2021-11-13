#include<stdio.h>
#include<iostream>
#include<string>
#include<cstring>
using namespace std;


int main()
{
//variables
//boolean
bool loop = false;
bool sleeping = false;
//int
int number = 0;
int counter = 0;
int printed = 0;
int function = 0;
//string
string option = "nil";
string function_processed = "nil";
string bot_name = "nil";
string your_name = "nil";
//general Script
cout << "Welcome!";
function = 1;
function_processed = "run_chatbot_code";
cout << "\nhello, to start from a name for me: ";
cin >> bot_name;
cout << "\nbeautiful name, and what's your name?: ";
cin >> your_name;
cout << "Welcome, ";
cout << your_name;
cout << "\nSo, how about you take a look at my duties? (yes/no): ";
cin >> option;
if(option == "yes")
{
cout << "counter";
cout << "\ncalculator";
cout << "\ncomming soon...";
cout << "\ncomming soon...";
cout << "would you like to run any of them? (yes/no): ";
cin >> option;
if(option == "yes")
{
function = 569;
function_processed = "run_function";
}
}
if(option == "no")
{
cout << "would you like to close the Script? (yes/no): ";
if(option == "yes")
{
return 0;
}
if(option == "no")
{
while(1 == 1)
{
cout << "aeuuioa984foutorgj8erhg89easjrtgoiaerht89erhgiugehriughrrgyjgdyghggrtatragatgrgrtdeeargieriojgisgedfsdgfradesgrrdggefaredggferdrgfgadergfgdadgffg";
}
}
}
if(option != "no" and option != "yes")
{
cout << "Error 404";
cout << "\noption invalidates";
return 0;
}
}
