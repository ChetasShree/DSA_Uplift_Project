ques 1 
#include <iostream>

using namespace std;

int q1()
{
    for(int i = 1; i<=5;i++)
    {
        for(int j=1;j<=5-i;j++)
        {
            cout<< "  ";
        }
        for(int k=0; k<5;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}

ques 2

#include <iostream>

using namespace std;

int main()
{

    for(int i = 5; i>=1;--i)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
       for(int k= 5-i;k>=0; k--)
        {
            cout<<" ";
        }
        for (int l=5-i; l>0;l--)
        {
            cout<<" ";
        }
        for(int m=1;m<=i;m++)
        {
            cout<<"*";
        }


        cout<<endl;
    }
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(int k= 5-i;k>=0; k--)
        {
            cout<<" ";
        }
        for (int l=5-i; l>0;l--)
        {
            cout<<" ";
        }
        for(int m=1;m<=i;m++)
        {
            cout<<"*";
        }

        cout<< endl;
    }
return 0;
}

ques 3 
#include <iostream>

using namespace std;

int main()
{   static int c=1;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<c<<" ";
            ++c;
        }
        cout<<endl;
    }
    return 0;
}


ques 4 
#include <iostream>

using namespace std;

int main()
{
   for(int i=3;i>=1;i--)
   {
       for(int j=1;j<=i;j++ )
       {
           cout<<" ";

       }
       for(int k=3-i;k>=0;k--){
        cout<<"* ";
       }
       cout<<endl;
   }
   for(int i=1;i<=2;i--)
   {
       for(int j=1;j<=i;j++)
       {
           cout<<" ";
       }
        for(int k=3;k>1;k--){
        cout<<"* ";
       }
       cout<<endl;
   }
    return 0;
}

ques 5 
#include <iostream>

using namespace std;

int main()
{
   for(int i=1;i<=4;i++)
   {
       for(int j=1;j<=i;j++)
       {
           cout<<j<<" ";
       }
       for(int k=4-i;k>0;k--)
       {
           cout<<"  ";
       }
       for(int k=3-i;k>0;k--)
       {
           cout<<"  ";
       }
       for( int k=i;k>0;k--)
       {    if (k==4)
       {
           k=3;
           cout<<k<<" ";
       }else {
           cout<<k<<" ";}
       }

       cout<<endl;
   }
    return 0;
}


ques 6 
#include <iostream>

using namespace std;

int main()
{for(int i=1;i<=5;i++)
{
    for(int j=5;j>=i;j--)
    {
        cout<<j;
    }
    cout<<endl;
}
    return 0;
}

ques 7
ques 8 
#include <iostream>

using namespace std;

int main()
{
   for(int i=1;i<=4;i++)
   {
       for(int j=1;j<=i;j++)
       {
           cout<<" ";
       }
        if(i==1)
        {
            for(int k=5;k>0;k--)
                cout<<"* ";
        }
        else {
            for(int k=5-i;k>0;k--)
            {cout<<" * ";}
        }

       cout<<endl;
   }
    return 0;
}
