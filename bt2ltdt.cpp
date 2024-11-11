#include<stdio.h>
#include<conio.h>
int a[100][100],n; 
	void nhapfile()
	 {
		FILE *f;
		f = fopen("mtk.txt","r");
		if(f == NULL)
		printf("khong co tap tin");
	else
	{
		
	    fscanf(f,"%d",&n);
		  for(int i=1;i<=n;i++) 
	      	for(int j=1;j<=n;j++)
		      fscanf(f,"%d",&a[i][j]);
		}
		fclose(f);
		}
		void infile()
		{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			  printf("%d",a[i][j]);
		       	printf("\n");
			}
			}
			
			
int doixung()
{
  for(int i=1 ;i<=n; i++)
    for(int j=1 ;j<=n; j++)
       if(a[i][j] != a[j][i])
         return 0;
         return 1;
}
int main() {
	nhapfile();

   	 infile();
   	  if(doixung() == 1)
		printf("don do thi vo huong");
		else 
		{
		  printf("da do thi vo huong");
	      if(doixung() == 0 )
		{
			printf("gia do thi");
			
		} 
		else
		{
			if(doixung() == 1)
			if(doixung() == 1)
		     	printf("don do thi co huong");
	        else
	        { 
	           printf("da do thi co huong");
	        
	        }
		}
	}  
}
