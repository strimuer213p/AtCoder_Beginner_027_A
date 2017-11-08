/*
ある長方形の 3 つの辺の長さが与えられる。 残り 1 つの辺の長さを求めよ
*/
#include<iostream>
#include<array>
#include<algorithm>

const int side = 3;  //与えられるものが３つなので…あまり汎用性がわかりませんが一般化しました

int main() {
	std::array<int, side> length;

	std::cin >> length[0] >> length[1] >> length[2];

	for (int i = 0; i < length.size(); i++) {                               //2つが等しく一つを見つける時（長方形の残りの辺の性質より）
		if ((1 == std::count(length.begin(), length.end(), length[i]))) {   //←New！ std::count
			std::cout << length[i] << std::endl;
		}
	}
	if (side == std::count(length.begin(), length.end(), length[0])) {  //全て同じ辺の長さの時（正方形など） side=3以上の場合にも適用可
		std::cout << length[0] << std::endl;
	}

	return 0;
}