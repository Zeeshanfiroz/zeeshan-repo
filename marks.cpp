#include<iostream>
using namespace std;
int main () {
int phy, chem, math, eng, cds ;
float avg,percentage,sum;
cout << "Enter marks of physics \n";
cin >> phy;
cout << "Enter marks of chemistry \n";
cin >> chem;
cout << "Enter marks of math \n";
cin >> math;
cout << "Enter marks of english \n";
cin >> eng;
cout << "Enter marks of computer \n";
cin >> cds;
sum = phy+ chem+ math+ eng+ cds;
cout << "total marks = " << sum;
avg =sum/5;
percentage =(sum/500)*100;
cout << "\n  average marks = " << avg;
cout << "\n total percentage = " << percentage;

return 0;
}