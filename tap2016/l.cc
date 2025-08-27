#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct tnode {
  int data;
  bool lit;
  tnode *left;
  tnode *right;
};

typedef tnode *tree;

tnode *node(int data, bool lit, tnode *left, tnode *right) {
  tnode *x = new tnode;
  x->data = data; x->lit = lit;
  x->left = left; x->right = right;
  return x;
}

bool delete_elem(vector<int> &v, int x) {
  auto it = find(v.begin(), v.end(), x);
  bool cond = it != v.end();
  if (cond)
    v.erase(it);

  return cond;
}

tree construct(int N, vector<int> &lights) {
  bool lit = delete_elem(lights, N);
  if (N == 1 || N == 2)
    return node(N, lit, NULL, NULL);

  return node(N, lit, construct(N-1, lights), construct(N-2, lights));
}

void traverse(tree root) {
  if (!root)
    return;

  printf("%s%d\033[0m ", root->lit? "\033[100m" : "", root->data);
  traverse(root->left);
  traverse(root->right);
}

bool bwd(int i, int j) { return i > j; }

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> lights = {};
  for (int i = 0; i < K; ++i) {
    int x; cin >> x;
    lights.push_back(x);
  }

  tree r = construct(N, lights);
  traverse(r);
  cout << '\n';

  return 0;
}
