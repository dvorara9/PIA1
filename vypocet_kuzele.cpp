#include <iostream>
#include <string>
#include<fstream>
#include <stdio.h>
#include<math.h>
#include<fstream>

using namespace std;

int main() {

double h;
double r;

cout << "Zadeje polomer zakladny: ";
cin >> r;
cout << "Zdejte vysku kuzele: ";
cin >> h;

const double pi=3.14;
double zavorka = sqrt(pow(r,2)+ pow(h,2));

double S = pi * r * (r + zavorka);
double V = 1.0/3.0*pi*pow(r,2)*h;

// Vystup do souboru
	ofstream soubor;
	soubor.open("VaS_kuzele.txt",ios::out);
	
	soubor << "S = " << S << endl;
	soubor << "V = " << V << endl;
	
	soubor.close();

	return 0;
}
