#include<iostream>
#include<cstring>
using namespace std;
int main()
{
     char str[20];
     int i,num=0,sp=0,ch=0;
     cout<<"Enter  Username : ";
     gets(str);
     try
     {
          if(strlen(str)>6)
               throw "Not allow more than 6 character..!!";

          for(i=0;str[i];i++)
          {
          if(str[i]>='0'&&str[i]<='9')
               num=1;
          else if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
                   ch=1;
                   else
                    sp=1;
          }
          if(num!=1)
               throw 1;
          if(sp!=1)
               throw 2;
          if(ch==1)
          cout<<"User name is valid.."<<endl;
          }
     catch(const char s[100])
     {
          cout<<s<<endl;
     }
     catch(int n)
     {
          if(n==1)
          cout<<"Digit must be allowed in username....!!"<<endl;
          if(n==2)
               cout<<"Special charcter must be allowed in username..."<<endl;
     }
     return 0;
}
