#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <string>
using namespace std;
int main(){
	vector <int> V;
	for (int k = 0; k < 20; k++){
		V.push_back(k + 1);
	}
	sort(V.begin(), V.end(), greater <int>());
	for (int k = 0; k < 20; k++){
		cout << V[k] << endl;
	}
}