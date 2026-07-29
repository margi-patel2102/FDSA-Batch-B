#include<iostream>
using namespace std;
int main(){
    int n,i;
cout<<"Enter The Line: ";
string line,word,longest=" ";
getline(cin,word);
line=line+" ";
for(i=0;i<line.length();i++){
        if(line[i]!=' '){
            word=word+line[i];
        }
if(word.length()>longest.length()){
        longest=word;
        word="";
}
}

    cout<<"Longest Word is : "<<longest<<endl;
    cout<<"Length: "<<longest.length();
    return 0;

}
