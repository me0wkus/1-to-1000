#include <iostream>

using namespace std;

int main() {

	int i;
	int s = 0;

	for (i = 1; i <= 1000; i++) { //Если ставить тут (;), то оператор заканчивает подсчёт и затем s = s + i добавляет ещё 1, и в ответе получается 1001//

		s = s + i;

	}

	cout << "Summ of a numbers from 1 to 1000 is: " << s << endl;
	return 0;

}
