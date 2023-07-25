int count(int array[],int n);
int count(int array[],int n)
{
int s=0;
for(int i=0;i<5;i++)
{
if(array[i]%2==0)
s=s+1;
}
return s;
}