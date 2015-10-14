#include<iostream>
#include<cstdio>
#define S(x) scanf("%d",&x)
#define nl '\n'
using namespace std;
int abs(int n)
{
    return n<0?n*-1:n;
}
void check(int a[], int n, int x)
{
    bool Hash[2][1000000]={{0}}, here=1, sa, srem;
    int aa, rem, arem;
    for(int i=0; i<n; i++){
        aa = abs(a[i]);
        sa = a[i]<0;
        rem = x - a[i];
        arem = abs(rem);
        srem = rem<0;
        if(Hash[srem][arem]){
            here=0;
            cout << "   (" << rem << ") + (" << a[i] << ") = " << x << nl;
        }
        Hash[sa][aa] = 1;
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
