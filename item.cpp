#include<iostream>
using namespace std;

class item
{
    private:
        char name[20];
        int code[20];
        float price[20];
        int z;
    public:
        void add_(void);
        void delete_(void);
        void sell_(void);
        void display_(void);
        void initial(void){z=0;}

};
     void item :: add_(void)
       {
   
    cout<<"\nEnter the item category    : ";
    cin>>name[z];
    cout<<"Enter the item code        : ";
    cin>>code[z];
    cout<<"Enter the price of the item: ";
    cin>>price[z];
    z++;
       }


       void item :: delete_(void)
       {
     int i,j;
     

     cout<<"\nPlease enter the item code:";
     cin>>i;
     for(j=0;j<z;j++)
    {
      if(code[j]==i)
      {
        price[j]=0;
        cout<<"\nThe item is deleted from the list.";
        
        break;
      }
    }
       }

     
    void item :: display_()
     {
       int i,j=1;
   

       for(i=0;i<z;i++)
      {
        cout<<j<<".Item category is: "<<name[i];
        cout<<"\n  Item code is    : "<<code[i];
        cout<<"\n  Item price is   : "<<price[i]<<"tk."<<endl<<endl;
        j++;
       }
    
      }


 int main ()

   {
    int i;
    item shoping_mall;
   

    shoping_mall.initial();

    while(1)
    {
      cout<<"\n   simple inventory managment sysytem"<<endl;
      cout<<"\n1: Add a new item.";
      cout<<"\n2: Delete an item.";
    //  cout<<"\n3: Sale an item.";
      cout<<"\n3: Display all items.";
      cout<<"\n4: Exit"<<endl;
      cout<<"\n\n Choose a number:";
      cin>>i;

      switch(i)
      {
        case 1:
        {
          shoping_mall.add_();
          break;
        }
        case 2:
        {
          shoping_mall.delete_();
          break;
        }
        case 3:
        {
          shoping_mall.display_();
          break;
        }
        case 4:
        {
          cout<<"Invalid choice..please try again later..";
         
        }

        
      }
      if (i==4)
        break;
     
    }

  
    return 0;
}


