#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct state
{
  int a0;
  int a1;
};

main()
{
  int n,f,c;
  int size;
  
  printf("Enter the number of states: ");
  scanf("%d",&n);
  state *s = (state *)malloc(sizeof(state)*n);
  
  for(int i=0;i<n;i++)
  {
    printf("d(q%d, 0) ",i);
    scanf("%d",&s[i].a0);
    printf("d(q%d, 1) ",i);
    scanf("%d",&s[i].a1);
  }
  
  printf("Enter final state: ");
  scanf("%d",&f);
  
  printf("Enter string size: ");
  scanf("%d",&size);
  int *str = (int *)malloc(sizeof(int)*size);
  
  printf("Enter String: ");
  for(int i=0;i<size;i++)
  {
    str[i] = (int)getch() - 48;
    printf("%d",str[i]);
  }
  printf("\n");

  for(int i=0;i<size;i++)
  {
    if(str[i]==0)
      c=s[c].a0;
    else
      c=s[c].a1;
  }
  
  if(f==c)
    printf("String is Valid");
  else
    printf("String is Invalid");
}
