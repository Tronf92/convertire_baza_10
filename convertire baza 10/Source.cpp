#include <iostream>
#include <math.h>
using namespace std;

int transformare(int a,int b);


int transformare(int a,int b){
	int nr[100],i=0;
	int r,n=0;
	while(a!=0){
		nr[i]=a%10;
		a=a/10;
		i++;
	}
	i--;
	for(i;i>=0;i--){
		n+=nr[i]*pow(b,i);
	}
	return n;
}

int main(){
	int b,nr;
	cout << "Introduceti baza de numeratie:" << endl;
	cin >> b;
	cout << "Introduceti un nr in baza:" << b << endl;
	cin >> nr;
	cout << "Numarul in baza 10:" << transformare(nr,b)<< endl;
	system("pause");
	return 0;
}