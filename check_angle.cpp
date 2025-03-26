#include<iostream>
using namespace std;
int main () {
int a, b, c, sum;
cout << "Enter the three angles of triangle \n";
cin >> a >> b >> c;
sum = a + b + c;
if(sum==180)
cout << "triangle is valid " ;
else
cout << "triangle is invalid";
return 0;
}