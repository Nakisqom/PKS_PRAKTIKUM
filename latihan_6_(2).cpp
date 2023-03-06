/*
LATIHAN (2) 06-03-23
122440001
*/

#include <iostream>
using namespace std;

int main(){
	int bilangan;
	cout<<"Inputkan bilangan :";
	cin>>bilangan;
	
	if (bilangan>0){
		cout<<"Bilangan adalah Positif";
	} else if(bilangan<0){
		cout<<"Bilangan adalah Negatif"<<endl;
	} else{
		cout<<"Bilangan adalah Nol"<<endl;
	}
}
