#include<iostream>

using namespace std;
						// There are Three Major types {Int, Float, Char} 
						//Sub types char{char, char string}  Int{short-int, long int, etc} float{double, long double} 
int main(){
	int x = 5;				// Integer Declaration single 
	int a,b,c = 0;				// Integer multiple 
	float A,B,C;				// Float value assigned
	char res = 'MAX';			//Char is Alphabetical represntation (Only last Letter is taken in consideration)

	
	a= 5; b= 50; c =500;			// Int Assigned  
	A =5.0; B=50.50;  C=500.525;		// Float assigned
	
	cout<<x<<endl;
	cout<<"a is ->"<<a<<" :: b is -> "<<b<<" :: c is ->"<<c; 		// Integers are always an whole number without decimal point 
	cout<<"\n---------------------------------\n"; 					
	cout<<"A is ->"<<A<<" :: B is -> "<<B<<" :: C is ->"<<C;		//Floats are always a fractional or numbers with decimal point
	cout<<"\n---------------------------------\n"; 
	cout<<res<<endl;
	
	
}
