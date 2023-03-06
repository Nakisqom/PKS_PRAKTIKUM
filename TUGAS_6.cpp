/*
PRAKTIKUM 4
MUHAMMAD THARIQ HIDAYATULLAH_122440001_TPB 40
*/

#include <iostream>
using namespace std;

int main(){
	int bilangan;
	cout<<"=====MENENTUKAN BILANGAN GANJIL POSITIF, GANJIL NEGATIF, GENAP POSITIF, GENAP NEGATIF, NOL====="<<endl;
	cout<<"Inputkan bilangan :";
	cin>>bilangan;
	
	if (bilangan==0){
		cout<<"Bilangan adalah NOL";
	} else if(bilangan<0){
		if(bilangan%2==0){
			cout<<"Bilangan adalah GENAP NEGATIF";
		} else{
			cout<<"Bilangan adalah GANJIL NEGATIF";
		}			
	} else{
		if(bilangan%2!=0){
			cout<<"Bilangan adalah GANJIL POSITIF";
		} else{
			cout<<"Bilangan adalah GENAP POSITIF";
		}
	}
}
