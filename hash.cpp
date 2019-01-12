#include<iostream>
#include<unordered_map>
using namespace std;

int main() {

	unordered_map<int,int> umap;
	umap[1]= 0;
	umap[2]= 0;
	umap[3]= 776;
	umap[4]= 0;

	for (auto x:umap) {
		cout << x.first <<" " <<x.second<<endl;
	}
/*
	int key = 3;
	if(umap.find(key) == umap.end()){
		cout<<key<<"not found\n";
	}else { cout << " Found"<< umap[3]; }

*/
	cout << umap[8]<<endl;
	
	return 0;
}
