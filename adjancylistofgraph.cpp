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
    cout << "BFS is:- " << endl;
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
    cout<<endl;

    cout << "Shortest path using BFS:- " << endl;
    queue<int> Q1;
    vector<int> status(V,-1);
    Q1.push(0);
    status[0]=0;
    while(!Q1.empty()) {
        int x=Q1.front();
        Q1.pop();
        for (int i=0;i<Adj[x].size();i++) {
            int y=Adj[x][i];
            if(status[y]==-1) {
                status[y]=status[x]+1;
                Q1.push(Adj[x][i]);
            }
        }
    }
    for (int i=0;i<V;i++) {
        cout<<i<<" : ";
        cout<<status[i];
        cout<<endl;
    }
}

/*lokah*/

