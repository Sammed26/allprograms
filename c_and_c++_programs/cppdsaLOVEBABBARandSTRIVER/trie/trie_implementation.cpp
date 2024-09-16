#include <iostream>
using namespace std;

class TrieNode
{
    public:
        char data;
        TrieNode* children[26];  // because all values are now in lowercase
        bool is_terminal_node;

    TrieNode(char data)
    {
        this->data = data;
        for(int i = 0; i<26; i++)
        {
            children[i] = NULL;
        }
        is_terminal_node = 0;
    }
    TrieNode()
    {
        data = 'a';
        for(int i = 0; i<26; i++)
        {
            children[i] = NULL;
        }
        is_terminal_node = 0;
    }
};

class trie
{
    public:
        TrieNode* root;


    trie(char ch)
    {
        root = new TrieNode(ch);
    }


    void insert_into_trie(TrieNode* root, string word)
    {
        // base case
        if(word.length() == 0)
        {
            // whole word is traversed
            root->is_terminal_node = true;
            return ;
        }

        // if any characters are present in word, assume words are in small case
        int index = word[0] - 'a';
        TrieNode* child;

        if(root->children[index] == NULL)
        {
            // entry for this word is not present till now
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }
        else
        {
            // word is present earlier
            child = root->children[index];
        }

        insert_into_trie(child, word.substr(1));
    }

    void insert(string word)
    {
        // called insert_into_trie because we are going to solve it using recursion
        insert_into_trie(root, word);
    }


    bool search_in_trie(TrieNode* root, string word)
    {
        if(word.length() == 0)
        {
            if(root->is_terminal_node)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        int index = word[0] - 'a';
        if(root->children[index] == NULL)
        {
            return false;
        }
        else
        {
            return search_in_trie(root->children[index], word.substr(1));
        }
    }

    bool search(string word)
    {
        return search_in_trie(root, word);
    }


    bool remove_word(TrieNode* root, string word)
    {
        if(word.length() == 0)
        {
            if(root->is_terminal_node)
            {
                root->is_terminal_node = 0;
                return 1;
            }
            else
            {
                return 0;
            }
        }


        int index = word[0] - 'a';
        if(root->children[index] == NULL)
        {
            return 0;
        }
        else 
        {
            return remove_word(root->children[index], word.substr(1));
        }

    }

    bool remove(string word)
    {
        return remove_word(root, word);
    }

};

int main()
{
    trie* t = new trie('\0');

    t->insert("sammed");
    t->insert("iamback");
    t->insert("howare");
    t->insert("how");

    if(t->search("sa"))
    {
        cout<<"word is present"<<endl;
    }
    else
    {
        cout<<"not present in trie"<<endl;
    }

    if(t->remove("how"))
    {
        cout<<"word is found successfully and removed"<<endl;
    }
    else
    {
        cout<<"word is not found"<<endl;
    }


    if(t->search("how"))
    {
        cout<<"word is present"<<endl;
    }
    else
    {
        cout<<"not present in trie"<<endl;
    }

    return 0;
}