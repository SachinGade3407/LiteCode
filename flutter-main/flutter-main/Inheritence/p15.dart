mixin Demo1{
	void fun1(){
		print("In fun1 Demo1");
	}
	
}
mixin Demo2{
	void fun2(){
		print("In fun2 Demo2");
	}

}
class Demochild with Demo1,Demo2{


}
void main(){
	Demochild obj = new Demochild();
	obj.fun1();
	obj.fun2();
}


