#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

string ans="";
pair <int,string> z[20];
int lz=0;

//��¼ѭ������ 
void pht(int a) {
	lz++;
	z[lz].first=a;
}

//����ѭ������ 
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
	//ÿ�ζ���һ���ַ���ֱ�Ӵ�ͷ��ʼ��� 
	char ch;  
	//tnum��ѭ���Ĵ��� 
	int tnum; 
	//tqz������ѭ�����ַ��� 
	string tqz;
	
	  
	while(cin>>ch) {
		switch(ch) {
			// ��������������϶���������� 
			case '[':
				while(ch=='[') {
					cin>>ch;
					// ��ʼ����ѭ������ 
					tnum=0; //������ѭ����֮ǰ������					  
					while(ch>='0'&&ch<='9') {
						// ���������֣���ȫ�� x10����һλ 
						tnum=tnum*10+(ch-'0');
						cin>>ch;
					}
					//��¼ѭ������ 
					pht(tnum);  
				}
				//�˴����������е����ֺ������ţ���������Ŀ�ʼ��ӵ���ѹ�����е������� 
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
