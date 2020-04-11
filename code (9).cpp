#include <iostream>
using namespace std;



int main() {
	int t;
	cin>>t;
	while(t--)
	{
	bool n1 = true;
	int n;
    cin>>n;
    int a[n], b[n];
    for(int i=0; i<n; i++)
     {
        cin>>a[i]>>b[i];
        
     }
     if(n == 1)
      {
          if(a[n]<b[n]) {cout<<"NO"<<endl; n1 =false; break;}
      }
     else
     { 
    for(int i=1; i<=n; i++)
     {  
       if(a[i-1]<b[i-1]) {cout<<"NO"<<endl; n1 =false; break;}
       if(a[i] < a[i-1]) {cout<<"NO"<<endl; n1 =false; break;}
       if(b[i] <b[i-1]) {cout<<"NO"<<endl; n1 =false; break;}
       if(b[i] >b[i-1]) 
       {   if((b[i] - b[i-1])> (a[i] - a[i-1]))
            {cout<<"NO"<<endl; n1 =false;
            break;
            }
       }
       
     }
     }
     if(n1 == true) {
         cout<<"YES"<<endl;
     }
	}
	return 0;
}