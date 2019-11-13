#include <iostream>
using namespace std;

class Publication{
public:
    string title;
    float price;
};
class book:public Publication{
public:
    int page;
    void getdata(){
        cout<<"enter title of the book"<<endl;
        cin>>title;
        cout<<"Enter the price"<<endl;
        cin>>price;
        cout<<"No of pages in the book"<<endl;
        cin>>page;
    }
    void putdata(){
        cout<<"TITLE: "<<title<<endl;
        cout<<"PRICE: "<<price<<endl;
        cout<<"NO OF PAGES: "<<page<<endl;
    }
};
class tape:public Publication{
public:
    float minutes;
    void getdata(){
        cout<<"enter title of the book"<<endl;
        cin>>title;
        cout<<"Enter the price"<<endl;
        cin>>price;
        cout<<"Enter the duration of the tape"<<endl;
        cin>>minutes;
    }
    void putdata(){
        cout<<"TITLE: "<<title<<endl;
        cout<<"PRICE: "<<price<<endl;
        cout<<"DURATION: "<<minutes<<endl;
    }
};


int main(){
    class book x;
    class tape y;
    x.getdata();
    y.getdata();
    x.putdata();
    y.putdata();
    return 0;
}
