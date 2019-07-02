Sieve of Eratosthenes algorithm to generate the prime nos

#includestdio.h
#includemalloc.h
#includemath.h

int main()
{
    int a;
    int n,count=2;
    int i,j;
    int range,temp;

    printf(n please enter the last number till which you wish to find the prime nos n);

    scanf(%d,&n);

    allocating the memory to the array
    a=(int)malloc(nsizeof(int));

    for(i=0;in;i++)
        a[i]=count++;

    printing the initial array
    printf(n the initial array is n);
    for(i=0;in-1;i++)
        printf(%d ,a[i]);

    range=sqrt(n);

    for(i=0;i=range;i++)
    {
        temp=a[i];

        if(a[i]!=0){
        for(j=(temptemp);jn;)
        {
            a[j]=0;
            printf(log);
            j=(j+temp);
        }
        }
    }
    printf(n after eliminating the non prime nos nn);

    for(i=0;in-1;i++)
        printf(%d ,a[i]);

    printf(nn printing only the prime nos n);

    for(i=0;in;i++)
    {
        if(a[i]!=0)
            printf(%d ,a[i]);
    }

}
