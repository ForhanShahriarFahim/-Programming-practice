#include <bits/stdc++.h>
using namespace std ;

int main ( )
{
  int moves,minimumLength=0 ;
  string str;
  cin >>moves>>str;
  for( int i=0;i<moves;i++ )
    {
        if ( str[i] =='R' && str[i+1]=='U')
        {
        minimumLength ++ ;
        i++ ;
        }
    else if (str [i] == 'U' && str [i+1]== 'R' )
     {
        minimumLength ++ ;
        i++ ;
      }
        else minimumLength ++ ;
    }
    cout << minimumLength ;
    return 0 ;
}
