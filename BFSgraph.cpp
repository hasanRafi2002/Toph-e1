#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1e7 + 5;
vector<int> primes;
vector<int> adj[MAXN];
bool isPrime[MAXN];

void sieve(){
    fill(isPrime, isPrime+MAXN, true);
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i<MAXN; i++){
        if(isPrime[i]){
            primes.push_back(i);
            for(long long j = 1LL*i*i; j<MAXN; j+=i){
                isPrime[j] = false;
            }
        }
    }
}


void buildGraph(int limit){
    for(int i=2; i<=limit; i++){
        if(!isPrime[i]){
            vector<int> factors;
            int x = i;
            for (int p:primes){
                if(p*p>x) break;
                if(x%p == 0){
                    factors.push_back(p);
                    while(x%p==0) x/=p;
                }
            }
            if(x>1) factors.push_back(x);
            for(int p:factors){
                adj[p].push_back(i);
                adj[i].push_back(p);

            }
        }
    }
}



bool bfs(int A, int B){
    if(A==B) return true;
    queue<int> q;
    unordered_set<int> visited;

    q.push(A);
    visited.insert(A);

    while(!q.empty()){
        int node = q.front();
        q.pop();

        for(int neighbor:adj[node]){
            if(neighbor == B) return true;
            if(!visited.count(neighbor)){
                visited.insert(neighbor);
                q.push(neighbor);
            }
        }
    }
    return false;
}

int main()
{
sieve();
buildGraph(1e6);

int A,B;
cin>>A>>B;

if(bfs(A,B)) cout<<"Yes\n";
else cout<<"No\n";

    return 0;
}