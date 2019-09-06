#include<iostream>
using namespace std;
#include<stdlib.h>
int bsearch(int*,int,int,int);
int main()
{
int a[50],key;
int low = 0,found,n,i;
int high = n-1;
cout << "enter size of an array\n";
cin >>n;
cout << " enter the element of array\n";
for (i=0;i<n;i++){
cin >> a[i];
}
cout<< "enter the key element you want to search\n";
cin >> key; 
found = bsearch(a,key,low,high); 
if (found == -1)
{
cout << "element found\n";
}
else
cout << "element not found\n";
} 
int bsearch(int ar[],int key,int low,int high)
{
int mid, found = -1;
if(low <=high)
{
mid = (low +high)/2;
if (key ==ar[mid])
{
found = mid;
}
else if(key < ar[mid]) {
return (ar,key,low, mid-1);
}
else{
return bsearch(ar,key,mid +1,high);
}
}
return found;
}


