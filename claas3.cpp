/*contructor function*/                      //constructor is a member function of a class.
#include<iostream>                           //the name of the constructor is same as the name of the class. 
using namespace std;                         //it has no return type,so cant not use return keyword. 
class account                                //it must be an instance member function ,that is,it can never be static.
{                                            //constructor is use to solve problem of initialization.
	private:                                 //constructor is implicitly invocked when an object is created. 
		int balance;
	public:
	account()
	{
		cout<<"my name is ans"<<endl<<"account no=12341572v";
		 } 	
};
int main()
{
	account a;
	
}
