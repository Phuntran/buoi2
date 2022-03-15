#include <iostream>
#include<cstring>
#include<limits>
using namespace std; 
 
int main()
{
    char kyTu[10];
    cout << "Nhap ky tu: ";
    cin >> kyTu;
    if (strlen(kyTu)> 1)
	{
		cout<<"Yeu cau nhap lai!"<<endl;
		cout<<"Nhap 1 ki tu: ";cin>>kyTu;
	}

    switch(kyTu[0]) {
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        case 'i':
        case 'I':
        case 'a':
        case 'A':
        case 'e':
        case 'E':
            cout << "Ky tu " << kyTu << " la nguyen am" << endl;
            break;
        default:
            cout << "Ky tu " << kyTu << " la phu am" << endl;
    }
}
