#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
string ans="";
pair <int,string> z[20];
int lz=0;
void pht(int a) {
	lz++;
	z[lz].first=a;
}
void phst(string c) {
	z[lz].second+=c;
}
int topt() {
	return z[lz].first;
}
string topst() {
	return z[lz].second;
}
void pop() {
	z[lz].second="";
	lz--;
}
  //?????(?????)
  
int main() {
	char ch;  //????????
	int tnum;  //??????
	string tqz;  //???????
	while(cin>>ch) {
		switch(ch) {
			
                                     
			default :
				if(!lz) ans+=ch;
				else {
					tqz=ch;
					phst(tqz);
				}
                                     
		}
	}
	cout<<ans<<endl;   //???????AC?
	return 0;
}
