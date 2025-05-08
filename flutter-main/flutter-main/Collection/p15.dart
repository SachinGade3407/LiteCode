import 'dart:collection';
final class Company extends linkedListEntry<company>{
	int empCount;
	String compName;
	double rev;
	Company(this.empCount,this.compName,this.rev);
		String tostring(){
		return "$empCount.$compName.$rev";
	}
}
void main(){
	var compInfo = LinkedList<Company>();
	compInfo.add(new Company(700,"Vertices",100.20));
	print(compInfo);
	
}
