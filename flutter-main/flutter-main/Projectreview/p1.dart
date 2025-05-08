class Demo{
	final x;
	final str;
	Demo(this.x,this.str);
	void fun(){
		print("In fun Method");
		print(x);
		print(str);
	}
}
Demo objFun(){
	print("In objFun Function");
	return Demo(10,"Sachin");
}
void main(){
	Demo obj = objFun();
	obj.fun();
}

