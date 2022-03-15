#include <iostream>
using namespace std;
int main()
{
     int thang,nam;
     cout << " Nhap thang : "; 
	 cin>>thang;
     cout << " Nhap nam : ";
     cin>>nam;
     switch (thang)
     {
      case 1 :
      case 3 :
      case 5 :
      case 7 :
      case 8 :
      case 10 :
      case 12 :
          cout << " Thang do co 31 ngay " << endl;
		  break;
      case 2 :
         if (nam%4 == 0 && nam%100 !=0 || nam%400 == 0)
         {
              cout << " Thang do 29 ngay " <<endl;
         }
         else
         {
             cout << "Thang do co 28 ngay" <<endl;
         }
        break;
     case 4 :
     case 6 :
     case 9 :
     case 11 :
        cout << " Thang do co 30 ngay "<< endl;
	    break;
     }
    return 0;
}
