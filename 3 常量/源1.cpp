#include <iostream>
using namespace std;

int main() {
	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1;
	
	int val = 0;
	while (1)
{
	cin >> val;
	if (val > num)
	{
		cout << "too big" << endl;
	}
	else if (val < num)
	{
		cout << "too small" << endl;
	}
	else {
		cout << "correct!!" << endl;
		break;
	}

}

	system("pause");

	return 0;
}