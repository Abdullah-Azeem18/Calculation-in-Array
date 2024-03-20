#include<iostream>
using namespace std;
int main()
{
int a[5];
int b[5];
int c[5];
int i;
for(i=0;i<5;i++)
{
cout<<"value of array a";
cin>>a[i];
cout<<"\nvalue of array b";
cin>>b[i];
}
int sum=0;
for(i=0;i<5;i++)
{
sum=a[i]+b[i];
c[i]=sum;
}
cout<<"\n The values of array a:";
for(i=0;i<5;i++)
{
cout<<"\t"<<a[i];
}
cout<<"\nThe values of array b:";
for(i=0;i<5;i++)
{
cout<<"\t"<<b[i];
}
cout<<"\n The values of array c:";
for(i=0;i<5;i++)
{
cout<<"\t"<<c[i];
}
return 0;
}


    