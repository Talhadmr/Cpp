#include <iostream>

class Box
{
    private:
        double len;
        double wid;
        double heg;
    public:
        //varsayılan yapıcı 
        Box();
        //parametreli yapıcı
        Box(double l, double w, double h);
        //kopyalayıcı yapıcı
        Box(const Box &other);
        //operaör aşırı yüklemesi
        Box operator=(const Box &other);
        //yıkıcı
        ~Box();
    void display();      
};

Box::Box()
{
    std::cout << "deffault constructor called"<< std::endl;

};

Box::Box(double l, double w, double h)
{
    std::cout << "overload constructor called"<< std::endl;
    this->heg = h;
    this->len = l;
    this->wid= w;
};

Box::Box(const Box &other)
{
    std::cout << "coppy constructor called"<< std::endl;
    this->heg = other.heg;
    this->len = other.len;
    this->wid = other.wid;
}

Box Box::operator=(const Box &other)
{
    std::cout << "operator overloading called"<< std::endl;
    this->heg = other.heg;
    this->len = other.len;
    this->wid = other.wid;
    return *this;
};

Box::~Box()
{
    std::cout << "destructor called"<< std::endl;
};


void Box::display()
{
    std::cout << "heg: " <<  this->heg << std::endl;
    std::cout << "len: " <<  this->len << std::endl;
    std::cout << "wid: " <<  this->wid << std::endl;

}
int main()
{

    Box b1(1,2,3);
    Box b2;
    Box b3(b1); 
    Box b4 = b1;
    std::cout << "b1:::::  " ;
    b1.display();
    std::cout << "b2:::::: ";
    b2.display();
    std::cout << "b3::::::";
    b3.display();
     std::cout << "b4::::::";
    b4.display();


}
