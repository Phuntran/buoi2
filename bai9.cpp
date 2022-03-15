#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a, b, c;
	cout<<"Nhap vao a : ";
	cin>>a;
	cout<<"Nhap vao b : ";
	cin>>b;
	cout<<"Nhap vao c : ";
	cin>>c;
	int luachon;
	cout << "1. Tong" << endl; 
	cout << "2. Tich" << endl; 
	cout << "3. MAX" << endl;
	cout << "4. MIN" << endl;
	cout << "Nhap lua chon cua ban : " ; 
	cin>>luachon;
	switch (luachon)
	{
		case 1:
			cout<<"Tong 3 so la: "<<a+b+c<<endl;
			break;
		case 2:
			cout<<"Tich 3 so la: "<<a*b*c<<endl;
			break;
		case 3:
	 		max=a;
			if(a>=b && b>=c)
			{
				max=a;
				min=c;
			}
			else if(a<=b && b<=c)
			{
				max=c;
				min=a;
			}
			else if(a<=b && a>=c)
			{
				max=b;
				min=c;
			}
			else if(a<=b && a<=c && b>=c)
			{
				max=b;
				min=a;
			}
			cout<<"Max la:"<<max<<endl;
			cout<<"Min la:"<<min<<endl;
	        break;
		default :
 		    cout <<"khong co lua chon ban nhap";
	        break;
	
	}

	return 0;
}
