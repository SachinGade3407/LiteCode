void main(){
	var proLang = List.empty(growable:true);
	proLang.add("C");
	proLang.add("CPP");
	proLang.add("JAVA");
	proLang.add("PYTHON");
	print(proLang);
	var lang = ["ReactJS","Sprintboot","Dart"];
	proLang.addAll(lang);
	print(proLang);
	proLang.insert(3,"Flutter");
	print(proLang);
	proLang.insertAll(3,["GO","Swift"]);
	print(proLang);
	proLang.replaceRange(3,7,["Dart"]);
	print(proLang);
}
