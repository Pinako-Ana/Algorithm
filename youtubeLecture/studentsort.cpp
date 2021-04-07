#include <iostream>
#include <algorithm>

using namespace std;

class Student{
public:
    string name;
    int score;
    Student(string name, int score){
        this->name = name;
        this->score = score;
    }
    //정렬기준은 점수가 작은 순서
    bool operator <(const Student &student) const{
        return this->score < student.score;
    }
};

int main(void){
    Student students[] = {
        Student("안영진", 90),
        Student("허양지", 95),
        Student("최준성", 52),
        Student("한영일", 29),
        Student("서승환", 80)
    };
    sort(students, students + 5);
    for (int i = 0; i < 5; i++)
    {
        cout << students[i].name << ' ';
    }
    
}