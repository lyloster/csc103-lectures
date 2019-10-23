//binary search

#include <iostream>
using std::cout;
using std::endl;
#include <vector>
using std::vector;

int findInVec(const vector<int>& v, int x);

int main(){
	vector<int> v = {1,2,4,5,6,7,90};
	int x = 1;
	int n = findInVec(v, x);
	cout << n << endl;
	return 0;
}

int findInVec(const vector<int>& v, int x){
	int min = 0, max = v.size(), index;
	//window is inclusive of min and max
	while((max-min)+1 > 0){
		// min = 6, max = 6
		index = (max+min)/2;
		cout << "min " << min <<  " max " << max << " index " << index << endl;
		// window = 1
		if(x == v[index]){ // x is at index
			return index;
		}else if(x > v[index]){ //go right
			min = index+1;
			// min = 7, max = 6
		}else{//if( x < v[index]){ //go left
			max = index-1;
		}
	}
	//x is not in the vector
	return -1;
}
