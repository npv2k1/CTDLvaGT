

#include <cstring>
#include <iostream>
using namespace std;

int M = 3;
int N = 3;

string dictionary[];
int n;

bool isWord(string &str)
{

    for (int i = 0; i < n; i++)
        if (str.compare(dictionary[i]) == 0)
            return true;
    return false;
}

void findWordsUtil(char boggle[100][100], bool visited[100][100], int i,
                   int j, string &str)
{

    visited[i][j] = true;
    str = str + boggle[i][j];

    if (isWord(str))
        cout << str << endl;

    for (int row = i - 1; row <= i + 1 && row < M; row++)
        for (int col = j - 1; col <= j + 1 && col < N; col++)
            if (row >= 0 && col >= 0 && !visited[row][col])
                findWordsUtil(boggle, visited, row, col, str);

    str.erase(str.length() - 1);
    visited[i][j] = false;
}

void findWords(char boggle[100][100])
{

    bool visited[M][N] = {{false}};

    string str = "";

    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            findWordsUtil(boggle, visited, i, j, str);
}

int main()
{
    

    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            string tmp;
            cin >> tmp;
            dictionary[i] = tmp;
        }
        cin>>M>>N;
        char boggle[M][N];
        for (int i = 0; i < M; i++)
        {
            for (int i = 0; i < N; i++)
            {
                cin>>boggle[i][j];
            }
            
        }

        cout << "Following words of dictionary are present\n";
        findWords(boggle);
    }
    return 0;
}