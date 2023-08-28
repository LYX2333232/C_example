#include "employee.h"
class pieceworker : public employee
{
private:
    double wagePerPiece; //件薪
    int quantity;        //工件数
public:
    pieceworker(const long k, const char *str, double w = 0.0, int q = 0) : employee(k, str)
    {
        wagePerPiece = w;
        quantity = q;
    }
    ~pieceworker() {}
    void setwage(double w) //置件薪
    {
        wagePerPiece = w > 0 ? w : 0;
    }
    void setquantity(int q) //置工件数
    {
        quantity = q > 0 ? q : 0;
    }
    virtual double earning() const //计算月薪
    {
        return quantity + wagePerPiece;
    }
    virtual void print() const //输出计件工人的信息
    {
        employee::print();
        cout << setw(16) << "Piece Worker\n";
        cout << "\twagePerPiece " << wagePerPiece << "  quantity " << quantity;
        cout << "  earned $" << earings() << endl;
    }
};