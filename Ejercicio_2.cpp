#include <iostream>
#include <thread>
#include <vector>

using namespace std;

void Increase(vector<int> v, int n) {
	for(auto& i : v)
		i += n;

    for(const auto& i : v)
        cout << i << " ";
}

int main(){
	vector<int> v = {1, 5, 7, 10, 12, 14, 15, 18, 20, 22, 25, 27, 30, 64, 110, 220};
	int n = 10;

    for(const auto& i : v)
        cout << i << " ";

    cout << endl;

	thread t1(Increase, ref(v), n);
	t1.join();
}
