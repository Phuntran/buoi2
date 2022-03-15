#include <iostream>
using namespace std;
int main ()
{
	int x, y;
	char kitu;
    cout<<"==>NHAP X:",cin>>x;
    cout<<"==>NHAP Y:",cin>>y;
    cout<<"==>NHAP PHEP TOAN CAN THUC HIEN:";
	cin>>kitu;
	switch (kitu)
	{
		case '+':
			cout<<"==>X+Y :"<<x+y<<endl;
			break;
			case '-':
				cout<<"==>X-Y : "<<x-y<<endl;
				break;
				case '*':
				cout<<"==>X*Y : "<<x*y<<endl;
				break;
				case '/':
					if(y == 0)
					cout<<"Khong chia duoc"<<endl;
					else 
					cout<<"==>X/Y :"<<(float)x/y<<endl;
					break;
	}
	return 0;
}
