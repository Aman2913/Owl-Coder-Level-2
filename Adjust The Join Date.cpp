#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--) {
	    int n, k;
	    cin>>n>>k;
	    
	    cout<< ceil(n/5.0)- ceil(k/5.0) <<endl;
	}
	return 0;
}


