#include <iostream>
#include <string>
#include "Favorites.h"
#include "DiscographyList.h"
using namespace std;

DiscographyList::DiscographyList() {
	numAlbums = 0;
	totalAlbums = 0;

}
void DiscographyList::AddAlbum() {
	albums[numAlbums].getDiscographyInput();
	totalAlbums += albums[numAlbums].getQuantity();
	numAlbums++;
}
void DiscographyList::showDiscoList()
{
	int i;
	for (i = 0; i < numAlbums; i++)
	{
		cout << albums[i];
	}
	cout << "the total amount of albums on your list is : " << totalAlbums << endl;
}