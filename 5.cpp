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

int lcms(int a, int b){
    return a*b/__gcd(a,b);
}
int sol(int n){
    int lcm =1;
    for(int i=1;i<n+1;i++){
        lcm = lcms(lcm, i);
    }
    return lcm;
}
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout<<sol(n)<<endl;
    }
    return 0;
}