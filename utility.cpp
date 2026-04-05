#include <utility.h>

void print_if(std::vector<int> nums, bool (*predicate)(int))
{
    //This function takes a vector and a function pointer as arguments
    for(int i: nums)
    {
        if(predicate(i))
        {
            std::cout<<i<<"\t";
        }
    }
    std::cout<<"\n";

}

void testPerson()
{
    Person obj{"Larry", 18};
    std::cout<< obj << std::endl;

    auto l1 = [](Person p)
    {
        std::cout<< p << std::endl;
    };

    auto l2 = [](Person& p)
    {
        p.setName("Frank");
        p.setAge(32);
    };

    l1(obj);
    l2(obj);
    l1(obj);
}


void filter_vector(const std::vector<int>& vec, std::function<bool(int)> func)
{

    std::cout<<"[";
    for(int i:vec)
    {
        if(func(i))
        {
            std::cout<< i <<" ";
        }
    }
    std::cout<<"]"<<std::endl;
}

void display(const std::vector<Person>& pvec)
{
    for(const Person& p : pvec)
    {
        std::cout<<p.get_name()<<"\t"<<p.getAge()<<"\n";
    }
}

void sorting_function()
{
    std::vector<Person> stooges{
        {"Kriti", 33},
        {"sakshi", 27},
        {"meneka",43}
    };
    std::sort(stooges.begin(), stooges.end(), [](const Person& p1 , const Person& p2){return p1.get_name() > p2.get_name();});
    display(stooges);
}

void stateful_test1()
{
    int x{100};

    auto l = [x]()
    {
        std::cout<<"The value is"<<x;
       // x += 1; cannot modify captured by value
    };

    l();
    std::cout<<std::endl;
}

void stateful_test2()
{
    int x{100};

    auto l = [x]() mutable
    {

        x += 100;//modify captured by value
        std::cout<<"The value is"<<x<<std::endl;
    };
    std::cout<<"The value is"<<x<<std::endl;
    l();
    l();
    std::cout<<std::endl;
    std::cout<<"The value is"<<x<<std::endl;
    std::cout<<std::endl;
}

void stateful_test3()
{
    int x{100};

    auto l = [&x]()
    {
        std::cout<<"The value is"<<x;
        x += 1;
    };

    l();
    std::cout<<std::endl;
    std::cout<<"The value is"<<x;
    std::cout<<std::endl;
}

void stateful_test4()
{
    int x{100};
    int y{100};

    auto l = [=]() mutable
    {

        x += 100;
        y += 100;
        std::cout<<"The value is"<<x<<std::endl;
        std::cout<<"The value is"<<y<<std::endl;
    };

    l();
    std::cout<<std::endl;
    std::cout<<"The value is"<<x<<std::endl;
    std::cout<<"The value is"<<y<<std::endl;
    std::cout<<std::endl;
}

void stateful_test5()
{
    int x{100};
    int y{200};

    auto l = [&]() mutable
    {

        x += 100;
        y += 100;
        std::cout<<"The value is"<<x<<std::endl;
        std::cout<<"The value is"<<y<<std::endl;
    };

    l();
    std::cout<<std::endl;
    std::cout<<"The value is"<<x<<std::endl;
    std::cout<<"The value is"<<y<<std::endl;
    std::cout<<std::endl;
}

void stateful_test6()
{
    int x{100};
    int y{200};
    int z{300};

    auto l = [=, &z]() mutable
    {

        x += 100;
        y += 100;
        z += 100;
        std::cout<<"The value of x is"<<x<<std::endl;
        std::cout<<"The value of y is"<<y<<std::endl;
        std::cout<<"The value of z is"<<z<<std::endl;
    };

    l();
    std::cout<<std::endl;
    std::cout<<"The value of x is"<<x<<std::endl;
    std::cout<<"The value of y is"<<y<<std::endl;
    std::cout<<"The value of z is"<<z<<std::endl;
    std::cout<<std::endl;
}

void stateful_test7()
{
    Person p("Larry", 18);
    auto change_person1 =  p.change_person1();
    change_person1("Moe", 22);
    std::cout<<p<<std::endl;

    auto change_person2 =  p.change_person2();
    change_person2("Curly", 25);
    std::cout<<p<<std::endl;

    auto change_person3 =  p.change_person3();
    change_person3("Frank", 34);
    std::cout<<p<<std::endl;
}

void stateful_test8()
{
    People friends;
    friends.add("Larry", 20);
    friends.add("Moly", 50);
    friends.add("Tina", 22);
    friends.add("Joe", 25);
    friends.add("John", 24);
    friends.add("Lord", 30);
    friends.add("Mathew", 40);
    friends.add("Benjamin", 36);
    friends.add("Lila", 19);

    auto result = friends.get_people(30);

    std::cout << std::endl;

    for(const auto&p:result)
    {
        std::cout<<p<<"\n";
    }


}

