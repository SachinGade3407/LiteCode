import 'dart:collection';
void main(){
	var player = HashMap();
	player(18) = "Virat";
	print(player);
	player.addAll({45:"Rohit"});
	print(player);
	//`player.addEntries({7:"MSD",18:"VK"}.entries);
	print(player);
}
