#include<iostream>
using namespace std;
void circularswap(int *a,int *b,int *c);

main(){
    int x,y,z;
    cout<<"enter the x, y & z values : ";
    cin>>x>>y>>z;
    circularswap(&x,&y,&z);
    cout<<"after swapping"<<"\n";
    cout<<x<<"\n"<<y<<"\n"<<z;

}

void circularswap(int *a,int *b,int *c){
    int temp1,temp2;

    temp1 = *a;
    temp2 = *b;
    *a = *c;
    *b = temp1;
    *c = temp2;
    
}