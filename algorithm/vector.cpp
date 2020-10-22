#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin>>n; 
    for(int i=0; i<n; i++)
    {
        int m;
        cin>>m;
        v.push_back(m);
    }
    for(int i: v)
    {
        cout<<" "<<i;
    }
    return 0;
}
