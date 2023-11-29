#include "../include/Routes.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Route *initRoute(char *key, char *value) {
  struct Route *temp = (struct Route *)malloc(sizeof(struct Route));

  temp->key = key;
  temp->value = value;

  temp->left = temp->right = NULL;
  return temp;
}

void inorder(struct Route *root) {
  if (root != NULL) {
    inorder(root->left);
    printf("%s -> %s \n", root->key, root->value);
    inorder(root->right);
  }
}
