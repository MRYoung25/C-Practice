class Person
{
public:
    Person()
    {
        
    }
    ~Person()
    {
        
    }
private:
    char * name;
    int age;
    char sex;
public:
    void Print();
    void Setname();
};

int main()
{
    Person a;
    a.Print();
    a.Setname();
}
