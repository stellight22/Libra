#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Post
{
    private:
        string Title = "yo"; // Title

    public:
        // Constructor
        Post(){ };

        // Accessor and mutator functions
        void setTitle(string t) const
        {
            t = Title;
        }
        string getTitle() const
        {
            return Title;
        }

};

int main()
{
    const Post p;
    Post pp;
    p.setTitle("tuy");
    cout << p.getTitle();

    return 0;
}