#include <stdio.h>

template <typename Type>

Type min(Type a, Type b)
{
	if (a < b) {
		return static_cast <Type> (a);
	}
	else if (b < a) {
		return static_cast <Type> (b);
	}
	else {
		return static_cast <Type> (a);
	}
}

template <>
char min<char>(char a, char b)
{
	return printf("『数字以外は代入できません』\n");
}

int main() {
	printf("%d\n", min<int>(1, 52));
	printf("%f\n", min<float>(2.0f, 5.2f));
	printf("%lf\n", min<double>(1.65f, 75.2f));
	min<char>('a', 'b');

	return 0;
}