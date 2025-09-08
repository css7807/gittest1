#include<bits/stdc++.h>
using namespace std;
const int N=100;
int a[N];
int main(){
    srand(time(0));
    for(int i=0;i<N;i++) a[i]=rand()%1000;
    sort(a,a+N);
    for(int i=0;i<N;i++) cout<<a[i]<<" ";
    return 0;
}