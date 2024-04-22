#include <iostream>
#include <string>
#include<windows.h>
using namespace std;
class Pyear
{
public:
struct Uyear 
{ 	
	int day;  
	int month; 	
	int year; 
} st;
	Pyear(int , int,  int  ); 
void Vichisli()
{ 
	cout<<"Осталось дней = "<<30 - dPost - st.day << " месяцев = " 
	<< (mPost - st.month) -1  <<"  До окончания  колледжа " <<4 - (st.year - yPost)   <<endl; 	
}

private: int dPost; int mPost; int yPost; };
Pyear::Pyear(int dPost, int mPost, int yPost )
{ this->dPost = dPost; this->mPost = mPost; this -> yPost = yPost;
	this->st.day = st.day; this->st.month = st.month; this->st.year = st.year; }
 int main()
{ 	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Pyear OIBAS1222(1, 9, 2022 );
	SYSTEMTIME now;
	GetSystemTime(&now);
	OIBAS1222.st.day = now.wDay;
	OIBAS1222.st.month = now.wMonth;
	OIBAS1222.st.year = now.wYear;
	cout << OIBAS1222.st.day << " " << OIBAS1222.st.month << " " << OIBAS1222.st.year << endl;
	OIBAS1222.Vichisli();
 }
 
