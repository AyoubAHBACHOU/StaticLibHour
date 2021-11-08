#include "pch.h"
#include "Heure.h"
#include <iostream>
using namespace std;
DateHeure::Heure::Heure(short int h, short int m, short int s)
{
	this->H = (0 <= h && h < 24) ? h : 0;
	this->M = (0 <= m && m < 60) ? m : 0;
	this->S = (0 <= s && s < 60) ? s : 0;
}

void DateHeure::Heure::print() const
{
	if (this->H < 10)  cout << "0" << this->M << ":";
	else cout << this->M << ":";

	if (this->M < 10) cout << "0" << this->M << ":";
	else cout << this->M << ":";

	if (this->S < 10) cout << "0" << this->S << endl;
	else cout << this->S << endl;
}

bool DateHeure::Heure::operator>(const Heure& H) const
{

	//transformer en seconde
	int sthis = this->H * 3600 + this->M * 60 + this->S;
	int st = H.H * 3600 + H.M * 60 + H.S;
	//comparer
	if (sthis > st) return true;
	return false;
}