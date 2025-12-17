#include "graph.h"
#include <iostream>
using namespace std;

int main() {
    Graph G;
    CreateGraph(G);

    InsertNode(G, 'A');
    InsertNode(G, 'B');
    InsertNode(G, 'C');
    InsertNode(G, 'D');
    InsertNode(G, 'E');
    
    ConnectNode(G, 'A', 'B');
    ConnectNode(G, 'A', 'C');
    ConnectNode(G, 'B', 'D');
    ConnectNode(G, 'C', 'E');

    cout << "=== Struktur Graph ===\n";
    PrintInfoGraph(G);
    cout << endl;
    cout << "=== DFS dari node B ===\n";
    ResetVisited(G);
    PrintDFS(G, FindNode(G, 'B'));
    cout << endl;
    cout << "=== BFS dari node B ===\n";
    ResetVisited(G);
    PrintBFS(G, FindNode(G, 'B'));

    return 0;
}
