   #include<stdio.h>
   #include<conio.h>
   void main()
   {
   clrscr();
   int i,j,n,a[10],temp;
   printf("please enter the size of array:\n");
   scanf("%d",&n);
   printf("enter the %d elements one by one:\n",n);
   for(i=0;i<n;i++);
   {
   scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
   for(j=i+1;j<n;j++)
   {
   if(a[i]>a[j])
   {
   temp=a[i];
   a[i]=a[j];
   a[j]=temp;
   }
   }
   }
   printf("assending order of an array:\n");
   for(i=0;i<n;i++)
   {
   printf("%d\t",a[i]);
   }
   getch();
   }