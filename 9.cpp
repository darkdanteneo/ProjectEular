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

int sol(int n){
    int b, c;
    int ans = -1;
    for(int a=3;a<(n/3)+1;a++){
        b = (n*n - 2*a*n)/(2*n - 2*a);
        c = n - b - a;
        if (a*a+b*b == c*c && a*b*c > ans) 
            ans = a*b*c;
    }
    return ans;
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