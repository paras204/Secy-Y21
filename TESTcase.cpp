#include<bits/stdc++.h>
#include<time.h>
using std::ofstream;
using namespace std;
int main(){
     ofstream outdata;
    srand(time(NULL));
outdata.open("test.dat");
    for(int tt=0;tt<100;tt++){
        int n,m;

        n = (rand()%(10));
        m=rand()%1000;
        outdata<<n<<"\n";
        char arr[53];
        arr[0]='a';
        for(int i=0 ; i<25 ;i++){
            arr[i+1]=arr[i]+1;
        }
        arr[26]='_';
      arr[27] = 'A';
      for(int i= 28 ; i<53 ;i++){
      arr[i+1] = arr[i] + 1;
      }
        for(int i=0 ; i<m ; i++){
            int a=rand()%27;
            outdata<<arr[a];
        }
        outdata<<"\n";

for(int i=0 ; i<n ; i++){
            int b=rand()%m;
            for(int i=0 ; i<b ; i++){
                int k=rand()%27;
                outdata<<arr[k];
            }
            outdata<<"\n";   
        }
    }
    return 0;
}
