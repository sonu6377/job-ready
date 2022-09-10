/* 1
#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,i;
    printf("enter a numbers");
    scanf("%d",&n);
    if(n<0)
        printf("invalid");
    else
    {
        if(n==1)
            printf("%d",a);



        else
        {
            if(n==2)
                printf("%d",b);

        }
        for(i=3;i<=n;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        printf("\n%d",c);
    }
    return 0;
}*/
/* 2
#include<stdio.h>
int main()
{
    int n,a=-1,b=1,c,i;
    printf("enter a numbers");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d  ",c);
        a=b;
        b=c;
    }
    return 0;
}*/
/* 3
#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,i;
    printf("enter a numbers");
    scanf("%d",&n);
    if(n==a || n==b)
        printf("fibonacci series");
    else
    {
         c=a+b;
        for(i=1;c<n;i++)
        {
            a=b;
            b=c;
            c=a+b;
        }
        if(c==n)
            printf("fibonacci series");
        else
            printf("not a fibonacci series");
    }
    return 0;
}*/
/* 4
#include<stdio.h>
int main()
{
    int a,b,i;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    for(i=a>b?a:b ; i>=1;i--)
        if(a%i==0 && b%i==0)
               break;
    printf("hcf is %d",i);
}*/
/* 5
#include<stdio.h>
int main()
{
    int a,b,c,i;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    c=a<b?a:b;
    for(i=2;i<=c;i++){
        if(a%i==0 && b%i==0)
          break;
    }
    if(i==c+1)
        printf("co prime");
    else
    printf("not a co prime");
}*/
/* 6
#include<stdio.h>
int main()
{
    int i,n;
    printf("all prime numbers 1 to 100 \n");
    for(i=1;i<=1000;i++)
    {
        for(n=2;n<=i;n++){
            if(i%n==0)
            break;
        }
        if(n==i)
        printf("%d  ",i);
}
    }*/
/* 7
    #include<stdio.h>
    int main()
    {
        int a,b,i,j;
        printf("emter two numbers");
        scanf("%d %d ",&a,&b);
        for(i=a+1;i<=b-1;i++)
        {
            for(j=2;j<=i;j++)
            {
                if(i%j==0)
                    break;
            }
            if(i==j)
                printf("%d ",j);
        }
        return 0;
    }*/
/* 9
    #include<stdio.h>
    int main()
    {
        int n,i,c,r,sum=0;
        printf("enter a numbers");
        scanf("%d",&n);
        c=n;
        for(i=1;i<=c;i++)
        {
            r=n%10;
            sum=(r*r*r)+sum;
            n=n/10;
        }
        if(c==sum)
            printf("armstrong numbers");
        else
            printf("not armstrong numbers");
        return 0;

    }*/
/* 10

   #include<stdio.h>
   int main()
   {
       int a,s,r,b;
       printf("armstrong numbers are\n");
       for(a=1;a<=1000;a++)
       {
           s=0;
           b=a;
           for( ;b!=0; )
           {
               r=b%10;
               s=s+r*r*r;
               b=b/10;
           }
           if(s==a)
            printf("%d\n",a);
       }*/



