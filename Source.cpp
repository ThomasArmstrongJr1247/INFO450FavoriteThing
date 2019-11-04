#include <iostream>
#include <string>
#include "Favorites.h"
#include "DiscographyList.h"
using namespace std;
int main() {
	
	Discography idalbum1;
	idalbum1.getDiscographyInput();
	cout << idalbum1 << endl;
	
	DiscographyList albumList;
	albumList.AddAlbum();
	albumList.AddAlbum();
	albumList.AddAlbum();
	while (*id != &id);
	{
		albumList.showDiscoList();
	}
	system("pause");
	return 0;
}