#include<iostream>
using namespace std;
class Student{
    private:
        int roll;
    public:
        Student(int r){
            roll = r;
        }
        void get_roll(){
            cout<<roll<<endl;
        }
};
class Test:public Student{
    private:
        float sub1, sub2;
    public:
        Test(float s1, float s2, int r):Student(r){
            sub1 = s1;
            sub2 = s2;
        }
        void get_marks(){
            cout<<sub1<<" "<<sub2<<endl;
        }
};
class Sports{
    private:
        float score;
    public:
        Sports(float s):score(s){}
        void get_score(){
            cout<<score<<endl;
        }
};
class Result:public Test, public Sports{
    public:
        Result(float s1, float s2, float s, int r):Test(s1, s2, r), Sports(s){}
};
int main(){
    Result r(39, 45, 4, 12);
    cout<<"Roll no: ";
    r.get_roll();
    cout<<"Marks in 2 subjects: ";
    r.get_marks();
    cout<<"Sports score: ";
    r.get_score();
    return 0;
}
