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
long fiboSum(long n){
    long last = 2;
    long secondlast = 1;
    long current = 0;
    long sum = 2;
    while(last < n){
        current = last * 3 + secondlast * 2;
        secondlast = current - last - secondlast;
        last = current;
        sum += last;
    }
    sum -= last;
    return sum;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        cout<<fiboSum(n)<<endl;
    }
    return 0;
}