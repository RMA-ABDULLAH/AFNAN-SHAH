#include<iostream>
using namespace std;
int main(){
	string string1;
	string string2;
	cout<<"enter string 1 ";
	cin>>string1;
	cout<<"enter string 2 ";
	cin>>string2;
	
	bool same=true;
	
	if (string1.length() != string2.length()) {
        same = false;
        
    }
	else{
	
	for(int i=0;i < string1.length();i++){
	
			
			if(string1[i]!=string2[i]){
				same=false;
				break;
			}
			else{
				same=true;
			}
		}
	}
	
	if(!same){
		cout<<"strings are not same"<<endl;
	}
	else{
	cout<<"strings are  same"<<endl;
	cout<<"Oposite of string2 is "<<endl;
	
	for(int j=4;j>=0;j--){
		
		cout<<string2[j];
		
	}
	
	}
}

