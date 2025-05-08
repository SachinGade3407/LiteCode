class Demo{
	static Demo obj1 = new Demo();
	Demo(){
		print("Constructor");
	}
	Demo fun(){
		return obj1;
	}
}
void main(){
	Demo obj = new Demo();
}

