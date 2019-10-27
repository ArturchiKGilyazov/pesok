#pragma once

using namespace std;
class Title {
public:
	char brand[32];
	double price;
	int size_w;
	int size_h;
	void getData() {
		cout << brand << " " << size_w << " " << size_h << " " << price << endl;
	};
};