/*Write a C++ program to define a base class Item (item-no, name, price).
Derive a class Discounted-Item (discount-percent). A customer purchases 'n' items.
 Display the item-wise bill and total amount using appropriate format.*/
 #include<iostream>
 using namespace std;
 class itemDetails
{
protected:
int item_no;
char item_name[50];
float item_price;
};
class discountedItem:public itemDetails
{
    public:
int  discount_per;
int discount_Price;
void get_Details()
{
    cout<<"Enter item name :";
    cin>>item_name;
    cout<<"\n Enter item No.  :";
    cin>>item_no;
    cout<<"\n Enter discount prize: ";
    cin>>discount_Price;
    cout<<"Enter discount percenteage";
    cin>>discount_per;
    cout<<"-----------------------------\n";
    discount_Price=item_price-item_price*discount_per/100;
}
void display_Details()
{
    cout<<"\n Item Name: "<<item_name;
    cout<<"\n Item No: "<<item_no;
    cout<<"\n Item Price: "<<item_price;
    cout<<"\n discounted percent : "<<discount_per;
    cout<<"\n Discount price: "<<discount_Price;
    cout<<"------------------------------";


}
int main()
{
    int i,cnt,discount=0,price=0;

    discountedItem dt[100];
    cout<<"\n How many items you want to enter? :";
    cin>>cnt;
    for(i=1;i<=cnt;i++)
    {
        dt[i].get_Details();
    }
    for(i=1;i<=cnt;i++)
    {
        dt[i].display_Details();
    }
    for(i=1;i<=cnt;i++)
   {
    price = price+dt[i].item_price;
    }
    for(i=1;i<=cnt;i++)
   {

     discount=discount+dt[i].discount_Price;
    }
    cout<<"\n Total price : "<<price;
    cout<<"\n  Total Discount :"<<discount;
    cout<<"\n Total payable amount : "<<price-discount;
    cout<<"plese visit again";
    return 0;
}

};
