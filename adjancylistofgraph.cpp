#include<iostream>
#include <queue>
#include<vector>
using namespace std;

int main() {
    int V,E;
    cout << "Enter the number of vertices in the graph : ";
    cin >> V;
    cout<<"Enter the number of edges in the graph : ";
    cin>>E;
    vector<int>Adj[V];
    for(int i=1;i<=E;i++) {
        int a,b;
        cout << "Enter the end points of the edges " << i << ":";
        cin >> a >> b;
        Adj[a].push_back(b);
        Adj[b].push_back(a);
    }
    for(int i=0;i<V;i++) {
        cout<< i << " : ";
        for(int j = 0; j < Adj[i].size(); j++){
            cout << Adj[i][j] << " ";
        }
        cout << endl;
    }
    queue<int> Q;
    vector<int> visited(V,0);
    Q.push(0);
    visited[0]=1;
    while(!Q.empty()) {
        int x=Q.front();
        Q.pop();
        cout<<x<<" ";
        for(int i=0;i<Adj[x].size();i++) {
            int y=Adj[x][i];
            if(visited[y]==0) {
                Q.push(y);
                visited[y]=1;
            }
        }
    }
}