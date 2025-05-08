mixin DemoParent{
	void m1(){
		print("In m1");
	}
}
class Demo{
	void m2(){
		print("In m2");
	}
}
class Demochild extends Demo with DemoParent{

}
void main(){
	Demochild obj = new Demochild();
	obj.m1();
	obj.m2();
}
