int main()
{
  int i,j,k;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            for(k=1;k<=3;k++)
            {
                if(i==j || j==k || k==i)
                    continue;
                printf("%d%d%d\n",i,j,k);
            }
        }
    }
    getch();
    return 0;
}
