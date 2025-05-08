abstract class Demo1{
        void fun1(){
                print("In fun1 Demo1");
        }
        void fun2();
}
abstract class Demo2{
        void fun3(){
                print("In fun3 Demo2");
        }
        void fun4();
}
class Demochild implements Demo1,Demo2{
        void fun3(){
                print("In fun3 Demochild ");
        }
        void fun4(){
                print("In fun4 Demochild");

        }
}
void main(){
        Demochild obj = new Demochild();
        obj.fun1();
        obj.fun2();
        obj.fun3();
        obj.fun4();
}

