#include<iostream>
using namespace std;

int main()
{
    int a;
    cout << "enter a year for checking leap year or not\n" ;
    cin >> a;
    if(a%400==0) 
    cout<< "this year is leap year"; 
    else if(a%100==0) 
    cout<< "this year is not a leap year";
    else if(a%4==0) 
    cout<< "this year is leap year";
    else 
    cout<< "this year is not a leap year";
    return 0;
}