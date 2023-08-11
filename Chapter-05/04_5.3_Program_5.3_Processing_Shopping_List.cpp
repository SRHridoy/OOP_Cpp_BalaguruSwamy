#include <iostream>
using namespace std;

class ITEMS
{
    int itemCode[100];
    float itemPrice[100];
    string itemName[100];
    int count = 0;

    public:
        void homePage(ITEMS);
        void getItem(void);
        void totalAmount(void);
        void removeItem(void);
        void displayItem(void);
};

/*_____________________Making function for adding items and their price____________________*/
void ITEMS :: getItem(void)
{
    cout << "Enter The Item Code : ";
    cin >> itemCode[count];
    cout << "Enter The Item Name : ";
    cin >> itemName[count];
    cout << "Enter The Item Price : ";
    cin >> itemPrice[count];
    cout << endl << endl;
    count++;
}

/*_____________________Function for Calculate total price____________________*/
void ITEMS :: totalAmount(void)
{
    float sum = 0;
    for(int i = 0; i<count; i++){
        sum+=itemPrice[i];
    }
    cout <<endl << endl <<"Total price of your items is : " << sum << endl<<endl;
}
/*_____________________Function for remove items____________________*/
void ITEMS :: removeItem(void)
{
    int code;
    cout << "Enter Item code : ";
    cin >> code;
    for (int i = 0; i < count; i++)
    {
        if(itemCode[i] == code)
            itemPrice[i] = 0;
    }
    
}
/*_____________________Function for displaying all items____________________*/
void ITEMS :: displayItem(void)
{
    cout << endl << "\t\t\t"<<"Name" <<"\t\t" << "Code" << "\t\t"<<"Price" << endl;
    for (int i = 0; i < count; i++)
    {
        cout << endl << "\t\t\t" << itemName[i] <<"\t\t"<<itemCode[i] << "\t\t" << itemPrice[i] << endl;
    }
}

/*_____________________Function for showing option/Home page____________________*/
void ITEMS :: homePage(ITEMS customer)//Objects as Arguments
{
    cout << endl<<endl<<"___________________________Welcome to My Mini Cart______________________________"<<endl <<endl;
    int choose;
    do
    {
        cout << "Please, Decide sir, What do you want? "<<endl;
        cout << endl<< "\t1:Add an item";
        cout << endl<< "\t2:Display total price";
        cout << endl<< "\t3:Delete an item";
        cout << endl<< "\t4:Display your all items";
        cout << endl<< "\t5:Thanks sir!" << endl << endl; 
        cout << "Enter Your Choice Sir : ";               
        cin >> choose;

        switch (choose)
        {
        case 1:
            customer.getItem();
            break;
        case 2:
            customer.totalAmount();
            break;
        case 3:
            customer.removeItem();
            break;
        case 4:
            customer.displayItem();
            break;
        case 5:
            break;
        
        default:
            cout <<endl<< "Please try again sir!" << endl;
            break;
        }
    
    } while (choose!=5);
    


}

int main()
{
    ITEMS customer01, customer02;
    customer01.homePage(customer01);
}