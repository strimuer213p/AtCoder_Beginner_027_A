/*
���钷���`�� 3 �̕ӂ̒������^������B �c�� 1 �̕ӂ̒��������߂�
*/
#include<iostream>
#include<array>
#include<algorithm>

const int side = 3;  //�^��������̂��R�Ȃ̂Łc���܂�ėp�����킩��܂��񂪈�ʉ����܂���

int main() {
	std::array<int, side> length;

	std::cin >> length[0] >> length[1] >> length[2];

	for (int i = 0; i < length.size(); i++) {                               //2����������������鎞�i�����`�̎c��̕ӂ̐������j
		if ((1 == std::count(length.begin(), length.end(), length[i]))) {   //��New�I std::count
			std::cout << length[i] << std::endl;
		}
	}
	if (side == std::count(length.begin(), length.end(), length[0])) {  //�S�ē����ӂ̒����̎��i�����`�Ȃǁj side=3�ȏ�̏ꍇ�ɂ��K�p��
		std::cout << length[0] << std::endl;
	}

	return 0;
}