#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
	int i ;
	int j ;
	int count;
	std::vector<int> v;
	int var;
	int c, first_num, second_num;

	while (cin>>i>>j){
		if (i > j){
			int first_num = i;
			int second_num = j;
			swap(i,j);
		}
		c = i;

		for (int n = i; n<=j; n++){
			var =  i;
			count = 1;
			while (var!= 1){
				if (var%2 == 0){
					var = var/2;
				}
				else {
					var = (3*var)+1;
				}
				
				count += 1;
			}
			v.push_back(count);
			i= i+1;
		}

		cout << first_num << ' '<< second_num<< ' '<<*max_element(v.begin(),v.end()) << "\n";

	}


	return 0;
}