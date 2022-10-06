#include<iostream>
#include<string>
#include<vector>
class Settlement {
	public:
	template < typename T > static T input() {
		T value;
		std::cin >> value;
		return value;
	}
};
class Customer
{
    public:
    std::string name;
    std::string address;
    int age;
};
class Account
{
    public:
    std::string accType;
    std::string branchType;
};
class RBI
{
    public:
    int withLimit;
    int n;
    double A;
    double P;
    double r;
    float t;
    long avg;
    long tot;
    long mb;
    int setWithdrawalLimit()
    {
        std::string actype = Settlement::input<std::string>();
        std::string brtype = Settlement::input<std::string>();
        if (actype == "SAVINGS" && brtype == "METRO")
        {
            withLimit = 5000;
        }
        else 
        {
            withLimit = 4000;
        }
        return withLimit;
    }
    double setInterestRate()
    {
        A = (P + r) / n * t;
        return A;
    }
    long setMAB()
    {
        mb = (avg * tot) / 31;
        return mb;
    }
};
class SBI : public RBI
{
    public:
    double setInterestRate()
    {
        A = P * (1 + r / n) + n * t;
        return A;
    }
    long setMAB()
    {
        mb = (avg + tot) / 30;
        return mb;
    }
};
class ICICI : public RBI
{
    public:
    double setInterestRate()
    {
        A = (P * r) / n + t;
        return A;
    }
    int setWithdrawalLimit()
    {
        withLimit = 7000;
        return withLimit;
    }
};
class InhTest
{
    public:
    static void main(std::vector<std::string> &args)
    {
        SBI* sbi = new SBI();
        ICICI* icici = new ICICI();
        sbi->P = 10.433;
        sbi->r = 7.42;
        sbi->n = 5;
        sbi->t = 7;
        double sbiInt = sbi->setInterestRate();
        std::cout << "SBI interest rate is:" + std::to_string(sbiInt) << std::endl;
        int iciciWL = icici->setWithdrawalLimit();
        std::cout << "ICICI withdraw limit is:" + std::to_string(iciciWL) << std::endl;
    }
};
int main(int argc, char **argv){
	std::vector<std::string> parameter(argv + 1, argv + argc);
	InhTest::main(parameter); 
	return 0;
};
