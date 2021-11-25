//Q1.Write a C++ program to calculate the size of integer, unsigned integer, signed integer, character, signed char, unsigned char, float, double.
#include<iostream>
using namespace std;
int main()
{
int integer;
unsigned int uinteger;
signed int sinteger;
char character;
signed char scharacter;
unsigned char ucharacter;
float floatType;
double doubleType;

cout<<"NAME-ADARSH BADONI   SEC-G   STUDENT ID 20011501"<<endl;
cout<<"size of integer is: "<<sizeof(integer)<<endl;
cout<<"size of unsigned integer is: "<<sizeof(uinteger)<<endl;
cout<<"size of signed integer is: "<<sizeof(sinteger)<<endl;
cout<<"size of character is: "<<sizeof(character)<<endl;
cout<<"size of signed character is: "<<sizeof(scharacter)<<endl;
cout<<"size of unsigned character is: "<<sizeof(ucharacter)<<endl;
cout<<"size of float is: "<<sizeof(floatType)<<endl;
cout<<"size of double is: "<<sizeof(doubleType)<<endl;
return 0;
}
