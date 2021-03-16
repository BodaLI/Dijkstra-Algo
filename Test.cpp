#include "Dijkstra.h"
using namespace std;


const int maxSize = 400;

int main(int argc, const char * argv[]) {
	vector<int> test_node = { 0,1,2 };
	vector<vector<int>> test_edge = {
	{0,1},{1,2}
	};
	vector<int> test_weight = {10,30};

	Graphlnk<int, int> G; // ����ͼ����
	G.node_in = test_node;
	G.edge_in = test_edge;
	G.weight_in = test_weight;

	int dist[maxSize], path[maxSize], v;
	int u0;

	// ����ͼ
	G.inputGraph();
	cout << "ͼ����Ϣ���£�" << endl;
	G.outputGraph();
	cout << "��������ʼ����u0:" << endl;
	cin >> u0;
	v = G.getVertexPos(u0); // ȡ����ʼ�����λ��
	// �Ұ�dist����ŵ�����ͼͷ�ļ��У����㽨������ͼʱ��ͬʱ��ʼ��dist����
	Dijkstra(G, v, dist, path); // ����Dijkstra����
	printShortestPath(G, v, dist, path); // �����������������·��
	return 0;
}