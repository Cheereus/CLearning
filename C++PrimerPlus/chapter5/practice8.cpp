//输入单词，以 done 结束

#include <iostream>
#include <cstring>

int main()
{
  using namespace std;
  const int arr_size = 100;
  char words[100];
  int num = 0;

  cin >> words;

  while (strcmp(words, "done") != 0) {
    num ++;
    cin >> words;
  }

  cout << "Words: " << num << endl;
  return 0;
}