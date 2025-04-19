int main()
{
  int i,b,c;
  int a[10]={10,20,30,40,50,60,70,80,90,100};

  printf("Sayilarimiz: 10,20,30,40,50,60,70,80,90,100");

  for(b=1;b<10;b++)
    {
      for (i=0;i<10 - 1;i++)
     {
      if (a[i]>a[i+1])
      {
        c=a[i];
        a[i]=a[i+1];
        a[i+1]=c;
      }
     }
    }

  printf("\n\nKucukten buyuge siralamasi :");

   for (i=0;i<10;i++)
   {
     printf("\n%d\t",a[i]);
   }
  return 0;
}