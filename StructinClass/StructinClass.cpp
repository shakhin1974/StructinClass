#include <iostream>
#include <string>
#include<windows.h>
using namespace std;



class Byear
{

public:
	struct Uyear
	{
	int day;
	int month;
	int year;
	} st;
	Byear(int , int,  int  );
	~Byear();
	void Vichisli() 
	{
		cout<<"Осталось дней = "<<30 - dPost - st.day << " месяцев = " << (mPost - st.month) -1  <<"  До окончания  колледжа " 
		<<4 - (st.year - yPost)   <<endl;
	}
private:
	int dPost;
	int mPost;
	int yPost;
};

Byear::Byear(int dPost, int mPost, int yPost )
{
	this->dPost = dPost;
	this->mPost = mPost;
	this -> yPost = yPost;
	this->st.day = st.day;
	this->st.month = st.month;
	this->st.year = st.year;

}

Byear::~Byear()
{
}
 int main()
{ 	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Byear B1(1, 9, 2022 );
	SYSTEMTIME now;
	GetSystemTime(&now);
	int a = B1.st.day = now.wDay;
	int b = B1.st.month = now.wMonth;
	int c = B1.st.year = now.wYear;

	cout << B1.st.day << " " << B1.st.month << " " << B1.st.year << endl;
	B1.Vichisli();
 	 
 }
 