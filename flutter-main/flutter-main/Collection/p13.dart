import 'dart:collection';
void main(){
	var constplayer = unmodifiableMapBase(player);
	print(constplayer);
	constplayer[7]="MSD";
	print(constplayer);
}

