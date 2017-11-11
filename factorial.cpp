#include <iostream>
using namespace std;

int main() {
	
	int n;
	
	cout << "Ingrese un numero:" << endl;
	cin >> n;
	
	if (n == 0) {
		n = 1;
	}
	for (int i = n - 1; i > 0;  i--){
		n = n * i;
	}
	cout << "El factorial del numero es: " << endl;
	cout << n; 
	return 0;
}
