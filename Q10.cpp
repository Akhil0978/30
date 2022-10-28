#include<iostream>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
using namespace std;
int main()
{
     char str[20];
     int i,digit=0,length=0,sp=0,pt=0;
     cout<<"Enter your Nick name : ";
     fgets(str,20,stdin);
     try
     {

            if(strlen(str)>9)
            {
               cout<<"prohabited greater than 8 character..!!"<<endl;
               throw 'c';
            }

          for(i=0;str[i];i++)
          {
          if(str[i]>='0'&&str[i]<='9')
                digit=1;
           if(ispunct(str[i]))
                    pt=1;
           if(str[i]==' ')
               sp=1;
          }
          if(digit==1)
          {
               cout<<"digit is prohabited  ( 0 - 9 ) "<<endl;
               throw 'c';
          }

               if(pt==1)
          {
               cout<<"special character restricted for (/ % $ # ! & * + - > ? < @) "<<endl;
               throw 'c';
          }
          if(sp==1)
          {
               cout<<"space is prohabited  ('  ') "<<endl;
               throw 'c';
          }
                   cout<<"Nick Name is Valid...."<<endl;
     }
     catch(const char c)
     {
          cout<<"Nick Name is Invalid....!!"<<endl;
     }

     return 0;
}
