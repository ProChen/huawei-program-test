#include <iostream>
#include <string>
using namespace std;
void combine(char *source,char *result,int n)
{
 int len=strlen(source);
 if(n==0)
 {
  cout<<result<<" ";
 }
 else
 {
  int i;
  int j;
  for(j=0;*(result+j)!='\0';j++);
        for(i=0;i<len; i++)
  {
   *(result+j)=*source;
   *(result+j+1)='\0';
   source++;
  combine(source,result,n-1);
  
  }
 }
}
 
int main()
{
     int n = 0;
    char source[100];
	for(int i=0; i<100; i++)
		source[i]='\0';
	cin>>source;
	cin>>n;
    char result[100];
	for(int i=0; i<100; i++)
		result[i]='\0';
     if(n>0 && strlen(source)>0 && n <= (int)strlen(source))
         combine(source, result, n);
     return 0;
}
