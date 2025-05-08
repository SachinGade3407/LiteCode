/// class with mixin:-
 

abstract mixin class Demo{
	void fun1(){
		print("In fun1 Demo");
	}
	void fun2();
}
class Asch{
	void ashi(){
		print("In ashi");
	}
}
class child extends Asch with Demo{
	void fun2(){
		print("In fun2 child");
	}
}
void main(){
	child obj = new child();
	obj.fun1();
	obj.fun2();
	obj.ashi();
}

