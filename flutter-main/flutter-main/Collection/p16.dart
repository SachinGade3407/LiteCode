import 'dart:collection';
void main(){
	var compData = ListQueue();
	compData.add('BMC');
	compData.add('TCS');
	compData.add('HCL');
	print(compData);
	
	compData.addFirst('UPSC');
	compData.addLast('UPSC');
	
	print(compData);
	compData.removeLast();
	print(compData);
}

	
