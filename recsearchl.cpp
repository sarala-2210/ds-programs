#include<iostream>
using namespace std;
int rec_Lsearch(int list[],int n,int key);
int main()
{
 int n,i,key,list[25],pos;
cout << enter no of elements\n";
cin >> n;
cout << "enter" << n << "elements ";
for(i=0;i<n;i++0
cin >> list[i];
cout << "enter the key element to search\n";
cin >> key;
pos= rec_lLsearch(list,n,key);
if(pos==-1)
cout << "\nelement not found";
else
cout << "\nelement found at index " << pos;
}
int rec_Lsearch(int list[],int n,int key)

