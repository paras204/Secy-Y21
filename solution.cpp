#include <bits/stdc++.h>
#define N 101000
#define K 20
using namespace std;
char  s[N],m[K][K];
int d[N], t[N];
int main()

{
    int i, j, k, n, l;
    for(scanf("%s", s), l=0; s[l]; l++);
    for(scanf("%d", &n), i=0; i<n; scanf("%s", m[i]), i++);
    for(i=0; i<l; i++)
        for(t[i]=N, j=0; j<n; j++)
        {
            for(k=0; m[j][k] && s[i+k]==m[j][k]; k++);
            if(!m[j][k] && k<t[i]) t[i]=k;
        }
    for(d[l]=0, k=0, j=0, i=l-1; i>=0; i--)
    {
        if(d[i+1]+1<t[i]-1) d[i]=d[i+1]+1;
        else d[i]=t[i]-1;
        if(d[i]>=k) { k=d[i]; j=i; }
    }
    cout<<k;
    return 0;
}
