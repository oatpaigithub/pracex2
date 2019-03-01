#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
char alphabet[8][8];

void showAlphabet();
void randomAlphabet();


int main(){
	srand(time(0));	
	randomAlphabet();
	showAlphabet();
}

void showAlphabet(){
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			cout << alphabet[i][j] << "  ";
		}
		cout << "\n";
	}
}

//Write definition of function randomAlphabet() here.
void randomAlphabet(){
	srand(time(0));
	char alphabet[8][8];
	int z = rand()%26+1;
	char  d[27] ="abcdefghijklmnopqrstuvwxyz";
	sizeof(d[z]),sizeof(alphabet[8][8]);
	for(int i = 0;i<=64;i++){
	d[z] = d[z] + z;
	z = rand()%26+1;
	}
	alphabet[8][8] = d[z];
	
}