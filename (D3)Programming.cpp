#include <iostream>
#include <string>
#include <vector>
class tri
{
    public:
    std::string ss;
    std::string name;
    tri(std::string ss)
    {
        name = ss;
    }
    tri()
    {
        name = "I love programming languages ";
    }
};
class Programming
{
    public:
    static void main(std::vector<std::string> &args)
    {
        tri* obj = new tri();
        obj->ss = "Java";
        std::cout << "I love " + obj->ss << std::endl;
        std::cout << obj->name << std::endl;
    }
};
int main(int argc, char **argv){
	std::vector<std::string> parameter(argv + 1, argv + argc);
	Programming::main(parameter); 
	return 0;
};
