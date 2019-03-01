#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

char random(){
	srand(time(0));
	char x = 'a' ;
	int y = rand()%26+1;
	 for(int i=0;i<37;i++){
		return x + y;
}
}
int main(){
	srand(time(0));
	int z = rand()%26+1;
	int y = rand()%26+1;
	char d[27] = "abcdefghijklmnopqrstuvwxyz";
	for(int i = 0;i<=26;i++){
	cout << d[z];
	z = rand()%26+1;
	y = rand()%26+1;
	}
}
