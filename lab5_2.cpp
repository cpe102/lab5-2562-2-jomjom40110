#include<iostream>
#include<string>
using namespace std;

string mixText(string x,string y){
	int i=0;
	int L1=x.size();
	int L2=y.size();
	string n="";
	if(L1==L2){
		while(i<L1){
			n=n+x[i]+y[i];
			i++;
		}
		return n;
		}else{
			return "E";
		}
	
	


	
}



int main(){	
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	
	
	return 0;	
}
