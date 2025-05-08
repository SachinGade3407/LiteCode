void main(){
	var  proLang = List.empty(growable:true);
	proLang.add("C");
	proLang.add("CPP");
	proLang.add("Java");
	print(proLang);
	print(proLang[2]);
	print(proLang.elementAt(3));
	print(proLang.getRange(0,3));
//	print(proLang.indexOf(Java));
//	print(proLang.lastIndexOf());
//	print(proLang.indexWhere(lang)=> lang.startswith("P"));
}
