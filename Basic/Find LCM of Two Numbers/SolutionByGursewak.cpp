#include <iostream>
#include <conio.h>
using namespace std;

int getGCD(int num1, int num2){
	int gcd;
	for(int i=1 ; i<=num1-num2; i++){
		if(num1%i==0 && num2%i==0){
			gcd=i;
		}
	}
	return gcd;
}
int main(int argc, char const *argv[])
{
	int num1, num2, num, gcd;
	cout<<"Enter two Number to find its GCD.\n";
	cin>>num1>>num2;
	if(num1>num2)
		cout<<num1*num2/getGCD(num1, num2)<<" is the GCD of the number.\n";
	else if(num2>num1)
		cout<<num1*num2/getGCD(num2, num1)<<" is the GCD of the number.\n";
	else{
		cout<<"LCM of two numbers is: "<<num1;
	}
	return 0;
}