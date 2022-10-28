#include<iostream>
#include<string>
using namespace std;
int main()
{
     string email = "akhil@gmail.com";
     string gmail = "@gmail.com";
     if(email.find(gmail)!=-1)
          cout<<"Valid gmail.."<<endl;
     else
          cout<<"Invalid gmail.."<<endl;
     return 0;
}
