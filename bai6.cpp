#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int luachon;
   	    cout <<"\t\t\t+============================================+"<<endl;
		cout <<"\t\t\t||                       MENU               ||"<<endl;
		cout <<"\t\t\t||------------------------------------------||"<<endl;
		cout <<"\t\t\t||   STT   |        TEN CONG VIEC           ||"<<endl;
		cout <<"\t\t\t||------------------------------------------||"<<endl;
		cout <<"\t\t\t||    1    | Talk                           ||"<<endl;
		cout <<"\t\t\t||------------------------------------------||"<<endl;
		cout <<"\t\t\t||    2    | Eat                            ||"<<endl;
		cout <<"\t\t\t||------------------------------------------||"<<endl;
		cout <<"\t\t\t||    3    | Play                           ||"<<endl;
		cout <<"\t\t\t||------------------------------------------||"<<endl;
		cout <<"\t\t\t||    4    | Sleep                          ||"<<endl;
		cout <<"\t\t\t+============================================+"<<endl;
     do 
     {
     cout << " Nhap lua chon cua ban : " << endl;
     cin >> luachon;
     switch (luachon)
     {
      case 1 :
	      cout << "Ban da chon talk." << endl;
          break;
      case 2 : 
	      cout << "Ban da chon eat" << endl;
          break;
      case 3 :
	      cout << "Ban da chon play" << endl;
          break;
      case 4 : 
          cout << "Ban da chon sleep" << endl;
          break;
      default : 
	  cout << " khong co lua chon ban nhap " << endl;
     }
   }
   while (luachon != 3);
   return 0;
}
