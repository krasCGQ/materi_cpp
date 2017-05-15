#include <iostream>
#include <conio.h>

using namespace std;

int main()
{int a,n;
 cout<<"Masukkan umur Anda: ";
 cin>>n;
 cout<<endl;
 for(a=1;a<=n;a++)
 {if(a<=5)
  {cout<<"Umur =  "<<a<<" tahun adalah Balita"<<endl;}
  else if(a<=9)
  {cout<<"Umur =  "<<a<<" tahun adalah Anak"<<endl;}
  else if(a==10)
  {cout<<"Umur = "<<a<<" tahun adalah Anak"<<endl;}
  else if(a<=15)
  {cout<<"Umur = "<<a<<" tahun adalah ABG"<<endl;}
  else if(a<=20)
  {cout<<"Umur = "<<a<<" tahun adalah Alay"<<endl;}
  else if(a>20)
  {cout<<"Umur = "<<a<<" tahun adalah Lebay"<<endl;}
 }
 getch();
 return 0;
}
