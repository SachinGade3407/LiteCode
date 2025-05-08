//Abstract classes

abstract class IFC{
	void material(){
		print("In material IFC");
	}
	void taste();
}
class IndianFC implements IFC{
	void material(){
		print("In material IndainFC");
		}
		void taste(){
			print("In taste IndianFC");
	}
}
class EUFC extends IFC{
	void material(){
		print("In material EUFC");
	}
	void taste(){
		print("In taste EUFC");
	}
}
void main(){
	IndianFC obj = new IndianFC();
	obj.material();
	obj.taste();
}

