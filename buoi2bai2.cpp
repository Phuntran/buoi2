#include <iostream>
using namespace std;
int main()
{
    char kytu;
    cout << " Nhap ky tu can kiem tra : ";
    cin >> kytu;
    switch (kytu)
     {
     case 'A' :
     case 'a' : 
	     cout << " Xin chao " <<endl; 
		 break;
     case 'D' :
     case 'd' :
	     cout << " Hoan nghenh " << endl;
		 break;
     default :
         cout << " Xin loi " << endl; 
		 break;
     }
   return 0;
}
