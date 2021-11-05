#include <iostream>

using namespace std;

class Complexity
{
	private: int k, j,i,n;
	int cnt=0;
	public: void sum(){
		cout<<"Enter value of n"<<endl;
		cin>>n;
		for(i=1;i<=n;i++){
			
			for(j=1;j<=n;j++){
				
				for(k=1;k<=n;k++){
					cnt+=1;
		
					cout<<cnt<<"\t+"<<endl;
				}
			}		
		}
	}


};
int main()
{
	Complexity co;
	co.sum();
	return 0;
	
}
