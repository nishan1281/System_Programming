//
// Created by nisha on 2/23/2024.
//

class Singleton{
public:
    Singleton(const Singleton&) = delete;
    static Singleton& Get(){
        return s_instance;
    }

    void Function(){}

private:
    Singleton(){
}

    static Singleton s_instance;
};

Singleton Singleton::s_instance;

int main(){
    Singleton& instance = Singleton::Get();
    instance.Function();
}