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

long long fact(long long n){
    long long factor = ((n-1)/30);
    long long factorsum = (225*factor) + (420 * ((factor*(factor-1))/2));
    factor = ((n-1)/30);
    factor *= 30;
    for(long long i=factor+1;i<n;i++){
        if( i%3 == 0 || i%5 == 0)
            factorsum += i;
    }
    return factorsum;
}
int main(){
    long long t;
    cin >> t;
    for(long long a0 = 0; a0 < t; a0++){
        long long n;
        cin >> n;
        cout<<fact(n)<<endl;
    }
    return 0;
}
