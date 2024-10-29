#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class User
{
public:
	int age; string name;

	User() : age{0}, name{' '} { }
	User(int a, string n) : age(a), name(n) {  };	

	bool operator<(const User & other) const {
		return age < other.age;
	};

};

int main() {
	int N{0};
	


	cin >> N;
	vector<User> list(N);
	int age; string name;
	for (int i = 0; i < N; i++) {
		cin >> age >> name;
		list[i].age = age;
		list[i].name = name;
	}

	stable_sort(list.begin(), list.end());

	for (int j = 0; j < N; j++) {
		cout << list[j].age << ' ' << list[j].name << endl;
	}

	return 0;
}