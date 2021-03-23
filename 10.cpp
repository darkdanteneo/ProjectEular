#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
long long SIZE = 1000000;
vector<long long> sum(SIZE, -1);
vector<bool> a(SIZE, true);
void sol(){
    a[0] = a[1] = false;
    long long i =0;
    int temp;
    for (int isprime : a){
        if(isprime == 1){
            sum[i] = sum[i-1] + i;
            for(long long n=i*i; n<SIZE;n+=i)
                a[n] = false;
        }
        else if(i == 0){
           sum[i] = 0;}
        else{
            sum[i] = sum[i-1];
        }
        i++; 
    }
}
int main(){
    int t;
    cin >> t;
    sol();
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout<<sum[n]<<endl;
    }
    return 0;
}