#include<bits/stdc++.h>
#define S(x) scanf("%d",&x)
#define nl '\n'
#define abs(n) (n)<0?(n)*-1:(n)
using namespace std;

void check(int a[] ,int n, int x)
{
    bool Hash[2][2][100000]={{{0}}}, here=1, sa, srem, arr;
    int aa, rem, arem;
    for(int i=0; i<n+n; i++){
        arr = i<n;
        aa = abs(a[i]);
        sa = a[i]<0;
        rem = x - a[i];
        arem = abs(rem);
        srem = rem<0;
        if(Hash[!arr][srem][arem]){
            here=0;
            cout << "   (" << rem << ") + (" << a[i] << ") = " << x << nl;
        }
        Hash[arr][sa][aa]=1;
    }
    if(here) cout << "Oops :p not found!" <<nl;
}
int main(void)
{
    int *a, n, x;
    cout << "Enter size: "; S(n);
    a = new int[n+n];
    cout << "Enter array1: ";
    for(int i=0; i<n; i++) S(a[i]);
    cout << "Enter array2: ";
    for(int i=n; i<n+n; i++) S(a[i]);
    cout << "Enter sum: "; S(x);
    check(a,n,x);
    return 0;
}
