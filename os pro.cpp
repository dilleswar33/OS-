#include<stdio.h>
#include<conio.h>
#include<string.h> 
 int main()
{
char p[10][5],temp[5];
 int i,j,pt[10],wt[10],totwt=0,totat=0,pr[10],pa[10],ex[10],tat[10],temp1,n,sum=0;
  printf("Enternoofstudents:");
scanf("%d",&n); for(i=0;i<n;i++)
{
printf("enterstudent%dname:",i+1); 
scanf("%s",&p[i]); 
printf("enterarrivaltime:"); 
scanf("%d",&pa[i]); 
printf("enterbursttime:"); 
scanf("%d",&pt[i]); 
printf("enternoofcandies:"); 
scanf("%d",&pr[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(pr[i]>pr[j])
{
temp1=pr[i]; 
pr[i]=pr[j]; 
pr[j]=temp1;
 temp1=pt[i];
  pt[i]=pt[j];
   pt[j]=temp1; 
   strcpy(temp,p[i]);
    strcpy(p[i],p[j]); 
	strcpy(p[j],temp);
}
}
}
printf("S_name\tB_time\tA_time\tNo.Candies\tex_time\tW_time\ttat_time\n");
for(i=0;i<n;i++)
{
sum+=pt[i]; 
ex[i]+=sum;
tat[i]=ex[i]-pa[i];
totat+=tat[i]; 
wt[i]=tat[i]-pt[i]; 
totwt=totwt+wt[i]; 
printf("%s\t%d\t%d\t\t%d\t%d\t%d\n",p[i],pt[i],pa[i],pr[i],ex[i],wt[i],tat[i]);
}
printf("S_name\tB_time\tA_time\tNo.Candies\tex_time\tW_time\ttat_time\n"); 
for(i=0;i<n;i++);
{
printf("%s\t%d\t%d\t\t%d\t%d\t%d\n",p[i],pt[i],pa[i],pr[i],ex[i],wt[i],tat[i]);
}
printf("totalwaitingtime=%d\nturnaroundtime=%d",totwt,totat);
getch();
}

