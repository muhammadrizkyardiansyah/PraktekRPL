#include<iostream.h>
#include<conio.h>
main()
{
int i,j,bil[10];
cout<<"masukan 5 buah bilangan\n";
cout<<",,,,,,,,,,,,,,,,,,,,,\n";
for(i=0; i<5; i++)
{
cout<<"bilangan ke"<<(i+1)<<":";
cin>>bil[i];
}
cout<<"bilangan yang diinputkan:\n";
for(j=0; j<5; j++)
cout<< bil[j]<<"";

getch ();
}