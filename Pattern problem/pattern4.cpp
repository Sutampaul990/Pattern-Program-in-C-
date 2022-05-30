//15 14 13 12 11
//10 9 8 7
//6 5 4
//3 2
//1

#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cout<<"Enter nth term : ";
    cin>>n;
    k=n*(n+1)/2;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--)
            cout<<" "<<k--;
            cout<<"\n";
    }
    return 0;
}