class Singleton{
public:
  static Singleton* GetInstance(){
    if(instance == NULL){
      instance = new Singleton();
    }
    return instance;
  }
private:
  Singleton(){};
  static Singleton* instance;
};