#include <iostream> 


using namespace std;

int main() {
	
	float v[10];
	float m=0;
	int i;
	
	for(i=0; i<10; i++){
    cout << "inserisci voti" << endl;
    cin >> v[i];
    }
    cout << "voti: " << endl;
	for(i=0; i<10; i++){
	cout << v[i] << endl;
	m = ( m + v[i] )/10;
	}
    cout << "la media dei voti e': " << m << endl;
	 
	
	
}
