#include<iostream>
using namespace std;
int main(){
	
	string string1;
	
	cout<<"enter string ";
	cin>>string1;
	
	for(int i=0;i<string1.length();i++){
		
		bool same=true;
		
		for(int j=i+1;j<string1.length();j++){
			
			if(string1[i]==string1[j]){
				same=false;
			break;
			}
			
		}
		if(same){
			cout<<string1[i];
		}
	}
}
