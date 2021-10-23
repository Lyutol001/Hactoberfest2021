#include<iostream>
using namespace std;
int main()
{
 int n{0};

 cin>>n;
 cout<<"[";
 for(int i=1;i<=n;i++)
 {
     
     if(i%3==0 && i%5==0)
     {
         cout<<"''Fizz Buzz''"<<"\n";
     }
     else if(i%5==0)
     {
         cout<<"''Buzz''"<<",";
     }
     else if(i%3==0)
     {
         cout<<"''Fizz''"<<",";
     }
     else
     {
         cout<<"''"<<i<<"''"<<",";
     }
 }
 cout<<"]";
 return 0;
}