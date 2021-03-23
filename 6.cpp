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

long sol(int n){
    long temp = n * (n+1);
    long sqauredSum = (temp * ((n<<1)+1))/6;
    long sumSquare = (temp>> 1)*(temp>> 1);
    return sumSquare - sqauredSum;
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