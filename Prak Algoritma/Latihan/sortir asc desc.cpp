#include <iostream>


using namespace std;

//Variabel Global
int A[]={2,3,4,6,7,8,9,1,5,0};
int n=10;

//Bubble Sorting
void SortingDesc()
{
  int i,j,temp;

  for (i=0;i<n;i++)
  {
      for (j=n-1;j>i;j--)
      {
          if (A[j]>A[j-1])
          {
              temp = A[j];
              A[j] = A[j-1];
              A[j-1] = temp;
          }
      }
  }
}

//Bubble Sorting
void SortingAscen ()
{
  int i,j,temp;

  for (i=0;i<n;i++)
  {
      for (j=n;j>i;j--)
      {
          if (A[j]<A[j-1])
          {
              temp = A[j];
              A[j] = A[j-1];
              A[j-1] = temp;
          }
      }
  }

}


void show()
{
    int i;

    for (i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}


int main()
{
    int pil;

    cout<<"Program Shorting Array\n"<<endl;
    cout <<"Sebelum di Urutkan = ";
    show();

    cout<<"\n1. Shorting Descending.";
    cout<<"\n2. Shorting Ascending.\n";

    cout<<"Input Pilihan Anda : ";
    cin>>pil;

    switch(pil)
    {
        case 1:
        SortingDesc();
        cout<<"\nData Setelah di urutkan\n\nDescending :";
        show();
        break;
        case 2:
        SortingAscen();
        cout<<"\nData Setelah di urutkan\n\nAscending :";
        show();
        break;
    } cout<<endl;

    return 0;

}
