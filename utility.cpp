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

void checkTrianglesEquivalent()
{
    struct Point{
        int x;
        int y;
    };

    Point p1{1,2};
    Point p2{4,3};
    Point p3{3,5};
    Point p4{3,1};

    std::vector<Point> triangle1{p1,p2,p3};
    std::vector<Point> triangle2{p2,p3,p1};
    std::vector<Point> triangle3{p1,p2,p4};

    if(std::is_permutation(triangle1.begin(), triangle1.end(), triangle2.begin(), [](Point lhs, Point rhs){return lhs.x == rhs.x && lhs.y == rhs.y;}))
    {
        std::cout<<"Triangle 1 and Triangle 2 are equivalent"<<std::endl;
    }
    else{
        std::cout<<"Triangle 1 and Triangl2 are not equivalent"<<std::endl;
    }
}

void test1()
{
    std::vector<int> test_scores{93, 88, 75, 68, 65};
    int bonus_points{5};

    std::transform(test_scores.begin(), test_scores.end(), test_scores.begin(),[bonus_points](int scores){
        return scores += bonus_points;
    });

    std::for_each(test_scores.begin(), test_scores.end(), [](int scores){std::cout<<scores<<"\t";});
}

void test2()
{
    std::vector<int> nums{1,2,3,4,5};

    nums.erase(std::remove_if(nums.begin(), nums.end(),[](int num){ return num % 2 == 0;} ), nums.end());

    std::for_each(nums.begin(), nums.end(), [](int num){ std::cout<<num<<"\t";});
}

