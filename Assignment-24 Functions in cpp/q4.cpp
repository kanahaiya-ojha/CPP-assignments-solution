//define a func to print pascal triangle up to n lines
void pascal(int row)
{
    int i , j , k , r ;
    for ( i=1 ; i<=row; i++)
    {
        k = 1 ;
        r = 0 ;
        for ( j=1 ; j<=2*row-1; j++)
        {
            if(j>=row+1-i && j<=row-1+i && k)
            {
                cout << combination(i-1,r);
                k = 0 ;
                r++;
            }
            else
            {
                cout << " " ;
                k = 1 ;
            }
        }
        cout << endl ;
    } 
}
