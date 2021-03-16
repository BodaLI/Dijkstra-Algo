#include "Dijkstra.h"
using namespace std;


const int maxSize = 400;

int main(int argc, const char * argv[]) {
	vector<int> test_node = { 0,1,2 };
	vector<vector<int>> test_edge = {
	{0,1},{1,2}
	};
	vector<int> test_weight = {10,30};

	Graphlnk<int, int> G; // 声明图对象
	G.node_in = test_node;
	G.edge_in = test_edge;
	G.weight_in = test_weight;

	int dist[maxSize], path[maxSize], v;
	int u0;

	// 创建图
	G.inputGraph();
	cout << "图的信息如下：" << endl;
	G.outputGraph();
	cout << "请输入起始顶点u0:" << endl;
	cin >> u0;
	v = G.getVertexPos(u0); // 取得起始顶点的位置
	// 我把dist数组放到有向图头文件中，方便建立有向图时，同时初始化dist数组
	Dijkstra(G, v, dist, path); // 调用Dijkstra函数
	printShortestPath(G, v, dist, path); // 输出到各个顶点的最短路径
	return 0;
}