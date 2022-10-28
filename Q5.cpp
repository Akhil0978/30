#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
     int countt=0,n;
     cout<<"Enter a phone Number : ";
     cin>>n;
     try
     {
          while(n)
          {
               n=n/10;
               countt++;
          }
          cout<<countt<<endl;
          if(countt>10)
               throw 3;
          if(countt==10)
               throw 1;
          else if(countt!=10)
               throw 2;
     }
     catch(int n)
     {
          if(n==1)
          cout<<"Phone number is Valid....!!"<<endl;
          else if(n==2||n==3)
               cout<<"Phone number is Invalid.."<<endl;
     }
     return 0;
}
