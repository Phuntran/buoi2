#include<iostream>
#include<limits>
using namespace std;
int main()
{  
	int cd,cr,r,cc,cday,AB,AC,BC;
	float dientich;
	int luachon;
	cout<<"\t\t\t=================================="<<endl;
	cout<<"\t\t\t|| MENU TINH DIEN TICH CAC HINH ||"<<endl;
	cout<<"\t\t\t=================================="<<endl;
	cout<<"\t\t\t||  1.   DIEN TICH HINH TRON    ||"<<endl;
	cout<<"\t\t\t=================================="<<endl;
	cout<<"\t\t\t||  2. DIEN TICH HINH CHU NHAT  ||"<<endl;
	cout<<"\t\t\t=================================="<<endl;
	cout<<"\t\t\t||  3. DIEN TICH HINH TAM GIAC  ||"<<endl;
	cout<<"\t\t\t=================================="<<endl;
	cout<<"\t\t\t||  4. KET THUC                 ||"<<endl;
	cout<<"\t\t\t=================================="<<endl;
		cout<<"==> NHAP VAO LUA CHON CUA BAN:";
		cin>>luachon;
		switch(luachon)
		{
	            case 1:
	            cout<<"==>NHAP BAN KINH:"; cin>>r;
	            	if(!(cin>>r))
	                {
		              cout<<"==>NHAP VAO KHONG HOP LE!!"<<endl;
		              cin.clear();
		              cin.ignore(numeric_limits<streamsize>::max(),'\n');
		              cout<<"==> NHAP BAN KINH";cin>>r;
	                }
	       	    cout<<"==>DIEN TICH HINH TRON:"<<3.14*r*r<<endl;
	       	    break;
	       	    case 2:
	       	    cout<<"==>NHAP CHIEU DAI:";cin>>cd;
	       	    cout<<"==>NHAP CHIEU RONG:";cin>>cr;
	       	    	if(!(cin>>cd)&& !(cin>>cr)   )  
	                {
	                 cout<<"==>NHAP VAO KHONG HOP LE!!"<<endl;
		             cin.clear();
		             cin.ignore(numeric_limits<streamsize>::max(),'\n');
		             cout<<"==>NHAP LAI CHIEU DAI:";cin>>cd;
	       	         cout<<"==>NHAP LAI CHIEU RONG:";cin>>cr;
	                }
	       		cout<<"==>DIEN TICH HINH CHU NHAT:"<<cd*cr<<endl;
	       		break;
	       		case 3:
	       		{	  
				       switch(luachon)
					   {
	       				case 5:
	       					{  		cout<<"==>NHAP AB:";cin>>AB;
	       	                        cout<<"==>NHAP AC:";cin>>AC;
	       	                        cout<<"==>NHAP BC:";cin>>BC;
							  if(!(cin>>AB) && !(cin>>AC) && !(cin>>BC))
	                               {
		                            cout<<"==>NHAP VAO KHONG HOP LE!!"<<endl;
		                            cin.clear();
		                            cin.ignore(numeric_limits<streamsize>::max(),'\n');
	                               }
	       		               if(AB*AB+AC*AC==BC*BC )
	       		                   {
	       			                cout<<"==>TAM GIAC VUONG TAI A THEO DINH LI PYTAGO"<<endl;
	       			                cout<<"==>DIEN TICH TAM GIAC ABC VUONG TAI A:"<<(AC*AB)/2<<endl;	    
			                       }
				              else if(AB*AB+BC*BC==AC*AC )
	       		                   {
	       			                cout<<"==>TAM GIAC  VUONG TAI B THEO DINH LI PYTAGO"<<endl;
	       			                cout<<"==>DIEN TICH TAM GIAC ABC VUONG TAI C:"<<(AB*BC)/2<<endl;	    
				                   }
				             else if(BC*BC+AC*AC==AB*AB )
	       		                   {   
	       			                cout<<"==>TAM GIAC  VUONG TAI C THEO DINH LI PYTAGO"<<endl;
	       		         	        cout<<"DIEN TICH TAM GIAC ABC VUONG TAI C:"<<(BC*AC)/2<<endl;	    
				                   } 
				                break;
							}
	       				case 6:
	       					{
	       		                    cout<<"==>TAM GIAC THUONG"<<endl;
	       			                cout<<"==>NHAP CHIEU CAO:";cin>>cc;
	       	                        cout<<"==>NHAP CANH DAY TUONG UNG:";cin>>cday;
	       	                    if(!(cin>>cd)&& !(cin>>cr)   )  
	                             {
	                                cout<<"==>NHAP VAO KHONG HOP LE!!"<<endl;
		                            cin.clear();
		                            cin.ignore(numeric_limits<streamsize>::max(),'\n');
		                            cout<<"==>NHAP LAI CHIEU CAO:";cin>>cc;
	       	                        cout<<"==>NHAP CANH DAY TUONG UNG:";cin>>cday;
	       	                     }
					                cout<<"==>TAM GIAC THUONG"<<endl;
					                cout<<"==>DIEN TICH TAM GIAC THUONG:"<<(cc*cday)/2<<endl;
	       				        break;
					        }
					   }
			    break;
	       	    }
	            default:
		        cout<<"==>KET THUC"<<endl; 	
		        break;	
		}
	

}
