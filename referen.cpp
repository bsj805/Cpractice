#include <iostream>
using namespace std;

int func(int &val)
{
		val=3;
}
int func2(int *(&arr))
{
	int i;
	for(i=0;i<3;i++)
	{
		arr[i]+=2;
	}
}
int func3(int *arr2)
{
	cout<<"인자로 넘어오는건 "<<arr2<<endl;
	cout<<"*arr2:"<<*arr2<<endl;
	*arr2+=100;
}

int main(int argc, char** argv) {
	int num1,num2;
	/*cin>>num1>>num2;
	cout<<"the sum val: "<<num1+num2<<endl;
	*/
	num1=2;
	func(num1);
	cout<<num1<<endl;  //reference로 잘 넘어가서 num1+=1 이 된 3이 출력
	
	int *pnum1=new int[3];
	pnum1[0]=1;
	pnum1[1]=2;
	pnum1[2]=3;
	int i;
	
	int* (&ref)=pnum1;
	func2(ref);
	for(i=0;i<3;i++)
	{
		cout<<"i:"<<i<<"ref:"<<ref[i]<<endl;  //차례로 [0]=3 [1]=4 [2]=5  reference로 잘 넘어감
	}
	cout<<"pnum의 주솟값"<<pnum1<<endl;  //0x5c1088
	func3(pnum1);			    //인자로 넘어오는건 0x5c1088  즉 arr2에 pnum1을 그대로 넘겼으니까
	cout<<pnum1[0]; 		    //*arr2+=100;을 해버렸기 때문에 arr2의 첫번째 인자에 +=100이 됨. 고로 [0]=103
	delete[] pnum1;
	
	return 0;
}
