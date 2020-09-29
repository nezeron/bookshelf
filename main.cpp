#include <iostream>
#include <string>
#include <vector>
#include "book.h"
#include "PrintBook.h"
#include "shelf.h"
#include "Book_shelf.h"
using namespace std;

int main(int argc,char** argv){

system("chcp 1251");
int mode = -1;
vector <Book_shelf> bshelfs;
Book_shelf bshelf;
while(mode !=0){
cout<< ".= ÌÅÍÞ =."<<endl;
cout<< "1.= ÄÄÎÁÀÂÈÒÜ ØÊÀÔ =."<<endl;
cout<< "2.= ÄÎÁÀÂÈÒÜ ÏÎËÊÓ Â ØÊÀÔ =."<<endl;
cout<< "3.= ÄÎÁÀÂÈÒÜ ÊÍÈÃÓ =."<<endl;
cout<< "4.= ÂÛÂÎÄ ÍÀ ÝÊÐÀÍ =."<<endl;
cout<< "0.= ÂÛÕÎÄ =."<<endl;
cout<< "ÂÂÅÄÈÒÅ ÍÎÌÅÐ È ÍÀÆÌÈÒÅ ENTER"<<endl;
cin>>mode;
switch(mode){
	case 0: continue;
	case 1: 
	bshelfs.push_back(bshelf);
	cout<<"ØÊÀÔ ÄÎÁÀÂËÅÍ"<<endl<<endl;
	break;
	case 2:
		if (bshelfs.size()>0){
			cout<<"ÄÎÑÒÓÏÍÎ "<<bshelfs.size()<<"ØÊÀÔÎÂ"<<endl;
			cout<<"ÂÂÅÄÈÒÅ ÍÎÌÅÐ ØÊÀÔÀ (ÎÒ 1 ÄÎ "<<bshelfs.size()<<"):";
			int n=0;
			cin>>n;
			if(n>0 && n<=bshelfs.size()){
				bshelfs[n-1].addshelf();
				cout<<"ÏÎËÊÀ ÄÎÁÀÂËÅÍÀ"<<endl<<endl;
			}else{
				cout<<"ÎØÈÁÊÀ"<<endl<<endl;
			}
		}else{
			cout<<"ÍÅÒ ÄÎÑÒÓÏÍÛÕ ØÊÀÔÎÂ"<<endl<<endl;
		}
		break;
	
	case 3:
	if(bshelfs.size()>0){
	         cout<<"ÄÎÑÒÓÏÍÎ "<<bshelfs.size()<<"ØÊÀÔÎÂ"<<endl;
			 cout<<"ÂÂÅÄÈÒÅ ÍÎÌÅÐ ØÊÀÔÀ (ÎÒ 1 ÄÎ "<<bshelfs.size()<<"):";
			 int n=0;
			 cin>>n;
			 if(n>0 && n<=bshelfs.size()){
				 bshelfs[n-1].addshelf();
				 cout<<"ÂÂÅÄÈÒÅ ÍÎÌÅÐ ÏÎËÊÈ";
			 	int m=0;
			 	cin>>m;
			 	PrintBook pb;
				 cout<<"ÂÂÅÄÈÒÅ ÍÀÇÂÀÍÈÅ ÊÍÈÃÈ";
				 string name;
				 cin>>name;
				 cout<<"ÂÂÅÄÈÒÅ ÊÎË-ÂÎ ÑÒÐÀÍÈÖ";
				 int pages;
				 cin>>pages;
				 pb.setName(name);
				 pb.setPages(pages);
				 bshelfs[n-1].addBook(pb,m-1);
			}else{
				cout<<"ÎØÈÁÊÀ Â ÍÎÌÅÐÅ ØÊÀÔÀ"<<endl<<endl;
			}
		}else{
			cout<<"ÄÎÑÒÓÏÍÛÅ ØÊÀÔÛ ÎÒÑÓÒÑÒÂÓÞÒ"<<endl<<endl;
			}
		break;
	case 4:
		for(int i=0;i<bshelfs.size();i++){
			cout<<"===ØÊÀÔ ¹"<<i+1<<"==="<<endl;
			bshelfs[i].Print();
		}
		cout<<endl;
		break;
	}
}
	cout<<"ÏÎÊÀ =)";
	return 0;
}
