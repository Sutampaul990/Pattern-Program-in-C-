/*
        * 
       * *
      * * *
     * * * *
    * * * * *
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter nth term : ";
    cin>>n;
    int k=(2*n-2);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++)
            cout<<" ";
            k--;
        for(int j=1;j<=i;j++)
        cout<<"* ";
        cout<<"\n";
    }
    return 0;
}