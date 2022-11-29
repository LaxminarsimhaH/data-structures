#include<bits/stdc++.h>
using namespace std;
class node{
public:
int data;
node * point;
node(int x){
data=x;
point =NULL;
}


};
void atpos(node*head,int pos,int data){

node* nn= new node(data);
int i;node*curr=head;
//if(head->point ==NULL){
for (i=0;i<pos-2;i++){
curr=curr->point;
}
nn->point=curr->point;
curr->point=nn;

curr=head;
while (curr!=NULL){
cout<<curr->data<<"-->"<<"";
curr=curr->point;
}
}



node * begin(node *head,int val){
node *nn=new node(val);
if(head==NULL){
return nn;
}else{
nn->point=head;
return nn;
}
}
node *last(node*start,node* pos,int xx){
node *iam=start;
node*nn=new node(xx);
if(start==NULL){
return nn;
}
else{
pos->point=nn;
return iam;
}
}



int main(){
int i,val,n;
node*temp,*nn,*head,*curr,*temp1;
cin>>n;
int arr[n];
for (i=0;i<n;i++){
cin>>arr[i];
}

head=new node(arr[0]);
temp1=temp=nn=head;
curr=head;
for(i=1;i<n;i++){
nn= new node(arr[i]);
temp->point=nn;
temp=nn;
}
cout<<"enter the value to be inseterd "<<endl;
cin>>val;
head=begin(head,val);
curr=head;

while (curr!=NULL){
cout<<curr->data<<"-->"<<" ";
curr=curr->point;
}
cout<<endl;
curr=nn;

cout<<"enter the value to be inseterd at last"<<endl;
cin>>val;
while(curr->point!=NULL){
curr=curr->point;
}
head=last(temp1,curr,val);
curr=head;
while (curr!=NULL){
cout<<curr->data<<"-->"<<" ";
curr=curr->point;
}
curr=temp1;
cout<<"enter the value of data to be printd at a speicfired position"<<endl;
int pos;
cin>>pos;
cin>>val;
atpos(curr,pos,val);
}
