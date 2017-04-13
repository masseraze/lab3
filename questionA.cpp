#include<iostream>
#include<fstream>
#include<vector>
#include<cstdlib>
using namespace std;
int main(){
int number=0;
fstream inFile("file.in",ios::in);
if(!inFile){
   cerr<<"fail opening"<<endl;
   exit(1);
}
inFile>>number;
int input;
int moveItem,insert;
vector<int>vi;
  while(inFile>>input){
     vi.push_back(input);
   }
  for(int next=1;next<number;++next) {
    insert = vi.at(next);
    moveItem = next;
  while((moveItem>0) &&(vi.at(moveItem-1) > insert)){
     vi.at(moveItem) = vi.at(moveItem-1);
     --moveItem;
       }
    vi.at(moveItem) = insert;
   }
  int u=0;
  for(int i=number-5;i<number;i++){
  u=u+vi.at(i);
  }
  cout<<u;
return 0;
}
