#include<iostream>
#include<math.h>
using namespace std;

int test;
float n,c;
int main() {
	cin >> test;
	while (test--) {
		cin >> n >> c;
		cout << int(ceil(n / c)) << endl;
	}
}
/*�˰������� �߸� ������.
ó���� ������ ���� % �����ڸ� �����ߴµ�, �����غ��� �������� ���� �� ����
������ �ѹ��� �ع����� �� �����߾���.%������ �������� ������ ���� '/'�����ڿ���.
�����⸦ �ϸ� N < C ��Ȳ���� ������ �����. /�����ڴ� ������ ���� ���������� ������ ũ��
0���� ó���ع�����. �� �κп��� ������ ���� ���ϴ� ���� �ȳ��Դ�. ���������� ������ ����
- �������̴�. '/'�����ڿ����� ó���� �ȵƴ� N < C ��Ȳ�� ó�� �� �� �ִ�. �� ���� ��� 
�����ϸ鼭 0���� ������ �Ǵ����ָ鼭 ó���ϸ� N < C ��Ȳ�� ó���ϰ� ���ϴ� ���� ���� �� �־���.
���� �˰������� ����ϸ� timeout�� �߻��Ѵ�. �׷��� �ٽ� ������ ���� float���� ����ؼ� �Ҽ��� �ڸ��� ã��,
�ø��� �ؾ߰ڴٴ� ������ �����, ceil�Լ��� ����ؼ� Ǯ����.
*/