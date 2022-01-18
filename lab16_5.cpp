#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a, int*b, int*c, int*d){
	int m[4];
	int n[4];
	int q = 0, w = 0, e = 0, r = 0;
	m[0] = *a, m[1] = *b, m[2] = *c, m[3] = *d;
		q = rand()%4;
	n[0] = m[q];
	m[q] = 0;
	do{
		w = rand()%4;
	}while(m[w] == 0);
	n[1] = m[w];
	m[w] = 0;
	do{
		e = rand()%4;
	}while(m[e] == 0);
	n[2] = m[e];
	m[e] = 0;
	do{
		r = rand()%4;
	}while(m[r] == 0);
	n[3] = m[r];

	*a = n[0], *b = n[1], *c = n[2], *d = n[3];
}
