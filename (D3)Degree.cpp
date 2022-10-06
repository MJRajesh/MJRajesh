#include<iostream>
using namespace std; 
class degree{	
public:	
void getdegree()	
{		
cout<<"I got a degree";	
}
};
class undergraduate: 
public degree
{	
public:	
void ug()	
{		
cout<<"I am an Undergraduate";	
}
};
class postgraduate: 
public degree
{	
public:
void pg()	
{		
cout<<"I am an Postgraduate";	
}};
int main()
{
degree d;	
undergraduate u;	
postgraduate p;	
d.getdegree();	
u.ug();	
p.pg();	
return 0;
}
