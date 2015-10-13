#include<iostream>
#include<cstdio>
#define S(x) scanf("%d",&x)
#define nl '\n'
using namespace std;
void check(int a[], int n, int x)
{
    bool Hash[1000000]={0}, here=1;
    for(int i=0; i<n; i++){
        int rem = x - a[i];
        if(Hash[rem] && rem >= 0){
            here=0;
            cout << "   " << rem << " + " << a[i] << " = " << x << nl;
        }
        Hash[a[i]] = 1;
    }
    if(here) cout << "Oops :p not found!" <<nl;
}
int main(void)
{
    int *a, n, x;
    cout << "Enter size: "; S(n);
    a = new int[n];
    cout << "Enter array: ";
    for(int i=0; i<n; i++) S(a[i]);
    cout << "Enter sum: "; S(x);
    check(a,n,x);
    return 0;
}
