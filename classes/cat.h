
#ifndef CAT_H_
#define CAT_H_
typedef enum
{
    SAD,
    HAPPY,
    CONCERNED
}mood_enum_t;

class  Cat
{
public:
    Cat();
    ~Cat();
    void speak();
    void jump();
    void purr();
    void petCat();
private:
    mood_enum_t mood;
};

#endif // CAT_H_
