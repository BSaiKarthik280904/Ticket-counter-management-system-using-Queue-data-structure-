#include<stdio.h> 
struct Queue{ 
 int queue[50]; 
 int f,r; 
}; 
int time = 0,pt = 0; 
void initQueue(struct Queue *q){ 
 q->f = -1; 
 q->r = -1; 
} 
void enqueue(struct Queue *q){ 
 if(q->r==20) 
 printf("\nOVER CROWDED"); 
 else{ 
  if(q->f==-1) 
   q->f++; 
  q->queue[++(q->r)] = pt; 
 } 
} 
void tickettime(struct Queue *q,int n){ 
 struct Queue q1; 
 int i,t[20]; 
 if(n!=0 && time==0){ 
  for(i=0;i<n;i++){ 
   enqueue(q); 
   pt++; 
  } 
  --pt; 
 } 
 else if(n==0&&time!=0){ 
  --pt; 
 } 
 else if(n!=0&&time!=0){ 
  for(i=0;i<n;i++){ 
   enqueue(q); 
   pt++; 
  } 
  --pt; 
 } 
 time++; 
} 
void displayind(struct Queue *q,int p){ 
 if((q)->f==(q)->r && p<q->r &&p>q->f){ 
  printf("\nQueue is empty"); 
 } 
 else{ 
  printf("\nThe time of person%d is %d sec ",p,q->queue[p]);
} 
void averagetime(struct Queue *q){ 
 if((q)->f==(q)->r){ 
  printf("\navg is 0"); 
 } 
 else{ 
  int i,avg=0; 
  for(i =(q->f) ;i<=q->r;i++){ 
   avg = avg+q->queue[i]; 
  } 
  printf("\navg is %d",avg/q->r); 
 } 
  
} 
int main(){ 
 struct Queue q; 
 initQueue(&q); 
 int i,n,t,n1=0; 
 scanf("%d",&t); 
 for(i=0;i<t;i++){ 
  scanf("%d",&n); 
  tickettime(&q,n); 
 } 
 averagetime(&q); 
 while(n1==0){ 
  int p; 
  scanf("%d",&p); 
  displayind(&q,p); 
  printf("\nEnter 0 to continue"); 
  scanf("%d",&n1); 
 } 
 return 0; 
} 
 
