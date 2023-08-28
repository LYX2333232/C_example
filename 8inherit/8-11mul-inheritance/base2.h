#ifndef BASE2_H
#define BASE2_H
class base2{
    protected:
    char letter;
    public:
    base2(char c){
        letter=c;
    }
    char getdata()const{
        return letter;
    }
};
#endif