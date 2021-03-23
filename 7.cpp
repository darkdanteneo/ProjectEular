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
vector<int> primes;
void printPrimes(){
    int fnd=0,ctr=0;
    for(int i=0;i<=104744;i++)
       {
           for(int j=2;j<=sqrt(i);j++)
               {
               if(i%j==0)
                  ctr++;
               }
               if(ctr==0&&i!=1)
               { fnd++;
                 primes.push_back(i);
                 ctr=0;
               }
               ctr=0;
       }
}

int main(){
    int t;
    cin >> t;
    printPrimes();
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout<<primes[n]<<endl;
        
    }
    return 0;
}