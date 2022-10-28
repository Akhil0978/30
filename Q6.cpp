#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
     int countt=0,n;
     cout<<"Enter a PIN CODE : ";
     cin>>n;
     try
     {
          while(n)
          {
               n=n/10;
               countt++;
          }
          cout<<countt<<endl;
          if(countt==6)
               throw 1;
          else if(countt!=6)
               throw 2;
     }
     catch(int n)
     {
          if(n==1)
          cout<<"PIN code is Valid....!!"<<endl;
          else if(n==2)
               cout<<"PIN code is Invalid.."<<endl;
     }
     return 0;
}
