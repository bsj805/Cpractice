#include <stdio.h>

int main() {
	int n;
	n=0;
	scanf("%d",&n);
	char **arr;
	arr=(char**)malloc(sizeof(char*)*n);
	
	if(arr==NULL)
	{
		printf("error making arr"); 			//malloc이 잘못됐을때 return 시키는 NULL값 확인해야돼.
		exit(0);
	}
	int i;
	
	for(i=0;i<n;i++)
	{
		arr[i]=(char*)malloc(256*sizeof(char));
	}
  
  //arr[1][2]='s';
  //prinf("%s",arr[1][2]);
  
  
	
	
	for(i=0;i<n;i++)
	{
		free(arr[i]);
	}
	free(arr);
	return 0;
}
