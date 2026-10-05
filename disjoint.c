#include<stdio.h>
#define MAX 1000
int parent[MAX];
void initialize(int n){
for(int i=0;i<n;i++){
parent[i]=i;
}
}
int find(int x){
while(x!=parent[x]){
x=parent[x];
}
return x;
}
void union_set(int x,int y){
int root_x=find(x);
int root_y=find(y);
if(root_x!=root_y){
parent[root_x]=root_y;
}
}
int connected(int x,int y){
return find(x)==find(y);
}
int main(){
int n=10;
initialize(n);
union_set(1,2);
union_set(3,4);
union_set(2,3);
printf("Are 1 and 4 connected? %s\n",connected(1,4)?"yes":"no");
printf("Are 1 and 5 connected? %s\n",connected(1,5)?"yes":"no");
return 0;
}
