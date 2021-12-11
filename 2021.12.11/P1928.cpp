#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

string ans="";
pair <int,string> z[20];
int lz=0;

//记录循环次数 
void pht(int a) {
	lz++;
	z[lz].first=a;
}

//加入循环内容 
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
  

int main() {
	//每次读入一个字符，直接从头开始检查 
	char ch;  
	//tnum被循环的次数 
	int tnum; 
	//tqz即用来循环的字符串 
	string tqz;
	
	  
	while(cin>>ch) {
		switch(ch) {
			// 读到左括号则跟上读里面的数字 
			case '[':
				while(ch=='[') {
					cin>>ch;
					// 开始读入循环次数 
					tnum=0; //读入新循环数之前先清零					  
					while(ch>='0'&&ch<='9') {
						// 后面有数字，则全体 x10上推一位 
						tnum=tnum*10+(ch-'0');
						cin>>ch;
					}
					//记录循环次数 
					pht(tnum);  
				}
				//此处读完了所有的数字和左括号，里面进来的开始添加到该压缩序列的内容中 
				tqz=ch;  
				phst(tqz);  
				break;
  
			case ']':
				tqz="";  
				tnum=topt();  
				for(int i=0; i<tnum; i++)
					tqz+=topst();  
				pop();  
				if(!lz)   
					ans+=tqz;
				else
					phst(tqz);
				break;
                                     
			default :
				if(!lz) ans+=ch;
				else {
					tqz=ch;
					phst(tqz);
				}
                                     
		}
	}
	cout<<ans<<endl;   
	return 0;
}
