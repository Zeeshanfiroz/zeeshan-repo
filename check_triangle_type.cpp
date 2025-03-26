#include<iostream>
using namespace std;
int main () {
int a, b,c, sum;
cout << "Enter side lenght of triangle \n";
cin >> a >> b >> c;
if(a+b>c && b+c>a && c+a>b ){
if (a==b && b==c)
cout << "this is equilateral triangle";
else if (a==b || b==c || c==a)
cout << "this is isosceles triangle";
else
cout << "this is scalene triangle";
}
else 
cout <<"this is invalid triangle";
return 0;
}