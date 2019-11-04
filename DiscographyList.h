#pragma once
#include <iostream>
#include <string>
#include "Favorites.h"
using namespace std;

class DiscographyList
{
	Discography albums[100];
	int numAlbums;
	int totalAlbums;
public:
	DiscographyList();
	void AddAlbum();
	void showDiscoList();
};
