/* Anastasia Gellert st130144@student.spbu.ru
	assignment 6
*/

#ifndef OBJ_H
#define OBJ_H
#include <vector>

class Class1
{
public:
    bool bar(int num, std::vector<float>&);
    int c_1_1();
    float c_1_2();
    void c_1_3();
};


class Class2
{
public:
    bool bar(int, std::vector<float>& vec);
    int c_2_1();
    float c_2_2();
    void c_2_3();
};


class Class3
{
public:
    bool bar(int num, std::vector<float>& vec);
    int c_3_1();
    float c_3_2();
    void c_3_3();
};


#endif
