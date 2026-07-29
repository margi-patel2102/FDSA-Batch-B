#include<iostream>
using namespace std;
int main(){
    int n,i,j,count=0;
cout<<"Enter Number of Books Borrowed: ";
cin>>n;
   int book[n];
cout<<"Enter the book id: ";
for(i=0;i<n;i++){
    cin>>book[i];
}
if(book[i]==0)
    continue;

for(j=i;j<n;j++){
    if(book[i]==book[j]){
        count++;
    }
}
if(count>1){

    cout<<"Books Borrowd More Than Once:"<<book[i]<<" ";
}

return 0;
}

