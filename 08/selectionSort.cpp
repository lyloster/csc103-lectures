//Selection sort

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

#include <algorithm>
using std::swap;

size_t indexOfSmallest(const vector<int>& V, size_t start);
void sort(vector<int>& V);

int main (){
	vector <int> v, swapped;
	int n;
	size_t start = 0;

	cout << "Please enter some numbers separated by space: " << endl;

	while(cin>>n){
		v.push_back(n);
	}

	sort(v);

	cout << "These are the numbers that you entered in ascending order : " << endl;

	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " "; 
	}
	return 0;
}

size_t indexOfSmallest(const vector<int>& V, size_t start){
	size_t min = start;
	for(size_t i = start+1; i < V.size(); i++){
		if(V[i] < V[min]){
			min = i;
		}
	}
	return min;
}

void sort(vector<int>& V)
{
	for (size_t i = 0; i < V.size()-1; i++){
		swap(V[i],V[indexOfSmallest(V,i)]);
	}
}