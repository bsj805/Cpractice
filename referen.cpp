#include <iostream>
using namespace std;

int func(int &val)
{
		val=3;
}

int main(int argc, char** argv) {
	int num1,num2;
	/*cin>>num1>>num2;
	cout<<"the sum val: "<<num1+num2<<endl;
	*/
	num1=2;
	func(num1);  //result num1 becomes 3
	cout<<num1;  //prints 3
	return 0;
}
