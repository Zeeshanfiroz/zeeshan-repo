#include<iostream>
using namespace std;
int main () {
float len_cm, len_m, len_km ;
cout << "Enter lenth in centimeter to convert \n";
cin >> len_cm ;
len_m=len_cm/100;
len_km=len_cm/100000;
cout << "\n lenght in meter = "<< len_m;
cout << "\n lenght in kelometer = "<< len_km;
return 0;
}