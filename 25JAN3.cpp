#include<iostream>
#include<vector>

using namespace std;

class Product
{
    int productPrice;
    int quantity;
    public:
        Product(int p=0, int q=0)
        {
            this->productPrice=p;
            (*this).quantity=q;
        }

        int StockValuation()
        {
            return productPrice* quantity;
        }

        void productSale()
        {
            if(quantity>0)
                quantity--;
            else
                cout<<"No More stock left for the sale";
        }

        void addProduct(int p=0, int q=0)
        {
            productPrice=p;
            quantity=q;
        }
        void addProductStock(int q)
        {
            this->quantity+=q;
            //(*this).quantity+=q;
        }

        void checkStock()
        {
            cout<<"The product Existing stock is "<<quantity<<" and its overall value is: "<<StockValuation()<<endl;
        }
};

/// set the values throught the object creation
//  check the current stock value 
// perform a sale of the product

int main()
{
    
    cout<<"Hey, welcome to this invenotory management system"<<endl;
    cout<<"I need info on the product"<<endl;
    Product pobj;
    //vector/list/map
    Product pSimpleArray[10]; // this has the actual objects initialzed at the time of creating the array eleemt
    
    int p,q,options,productNo;
    

    cout<<"Tell us how many products you want to enter(max 10):";
    cin>>productNo;
    Product **pArray = new Product*[productNo];
    
    for(int i=0;i<productNo;i++){
        cout<<"Enter the product price for the first time:";
        cin>>p;
        cout<<"Enter the product quantity for the first time:";
        cin>>q;
        pArray[i] = new Product();// actually allocate the actual product ovbject reference to the pointer 
        //element of the pArray *elements

        pArray[i]->addProduct(p,q);// pointer reference requires you to use the indirection operator
    }

    

    //cout<<"How many objects ";
    
    //  cout<<"Enter the product price for the first time:";
    //     cin>>p;
    //     cout<<"Enter the product quantity for the first time:";
    //     cin>>q;
    // pobj.addProduct(p,q);

do{

    cout<<"Which of the following product you want to sale:"<<endl;
    for(int i=0;i<productNo;i++){
        cout<<"enter "<<i<<" for :";
        pArray[i]->checkStock();
    }
    int productSelected;
    cin>>productSelected;

    cout<<"Choose the operation:"<<endl;
    cout<<"1. Single product Sale\n";
    cout<<"2. Product Stock VAluation\n";
    cout<<"3. Product Stock Update\n";
    cin>>options;

    switch(options)
    {
        case 1://sale
            pArray[productSelected]->productSale();
            pArray[productSelected]->checkStock();
            // pobj.productSale();
            // pobj.checkStock();
            break;
        case 2:// product stock valuation
            pArray[productSelected]->checkStock();
            // pobj.checkStock();
            break;
        case 3:// product quatity update
            cout<<"Tell me what is the quantity to add"<<endl;
            cin>>q;
            pArray[productSelected]->addProductStock(q);
            //pobj.addProductStock(q);
            break;
        default:
            cout<<"Invalid option";
        
    }

    cout<<"Do you want to do further:1 yes, 0 no";
    cin>>options;
}while(options);

    return 0;
}