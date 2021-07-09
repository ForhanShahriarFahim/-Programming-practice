void possibleSubsets(char A[],int N)
{
    for(int i=0;i<(1<<N);++i)
    {
        for(int j=0;j<N;++j)
        if(i&(1<<j))
            printf("%c",A[j]);
        printf("\n");
    }
}
int main()
{

    char A[]={'a','b','c'};
    possibleSubsets(A,3);
    return 0;
}
