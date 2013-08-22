#ifndef MESSAGE_H
#define MESSAGE_H
#include <iostream>
using namespace std;

class Message {
public:
    // Constructor
    Message(const string &str = "") :
        contents(str){};

    // Copy constructor
    Message(const Message&);

    // Assignment Operators
    Message& operator = (const Message&);
    ~Message();

    // Add or remove the message from specified Folder's
    // set of messages.
    void save(Folder&);
    void remove(Folder&);
private:
    string contents;
    set<Folder*> folders;
    void put_Msg_in_Folders(const set<Folder*> &);
    void remove_Msg_in_Folders();
};

#endif // MESSAGE_H
