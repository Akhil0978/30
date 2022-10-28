#include<iostream>
using namespace std;
bool isvalidEmailid(char *);
int main()
{
    char email[100];
    cout<<"\n Enter Email id : ";
    gets(email);
    try
    {
        if(isvalidEmailid(email))
            cout<<"\n Email Id is valid .";
        else
            throw 'c';
    }
        catch(char c)
        {
            cout<<"\n Exception Caught ... \n Invalid Email id !!!!";
        }
        catch(...)
        {
            cout<<"\n Default Exception";
        }
        return 0;
}
bool isvalidEmailid(char *email)
{
    int AtOffset=-1;
    int DotOffset=-1;
    int length=0;
    for(int i=0;email[i]!='\0';i++)
    {
        if(email[i]=='@')
            AtOffset=i;
        else if(email[i]=='.')
            DotOffset=i;

        length++;
    }
    if(AtOffset==-1 || DotOffset==-1)
        return 0;
    if(AtOffset>DotOffset)
        return 0;
    return !(DotOffset>=(length-1));
}
