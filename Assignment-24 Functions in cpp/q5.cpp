//define a function to check whether a given number is a term in a fibonacci series or not 
void fibonacci(int n)
{
    int n1 = -1 , n2 = 1 , n3 , k = 1 ;
    while(k)
    {
        n3 = n1 + n2 ;
        if(n==n3)
        {
            cout << "its a term in fibonacci series";
            k = 0 ;
        }
        n1 = n2 ;
        n2 = n3 ;
        if(n3>n)
        {
            cout << "its not a term in fibonacci series";
            break;
        }
    }
}