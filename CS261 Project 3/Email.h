/* 
 * File:   email.h
 * Author: brandan
 *
 * Created on February 3, 2015, 11:57 AM
 */

#ifndef EMAIL_H
#define	EMAIL_H

#include "Message.h"

class Email : public Message {
public:
    Email(string to, string from, int num, string emailAddress, string subjectLine);
    Email(const Email& orig);
    virtual ~Email();
    virtual int print();
    virtual int compose(string aMessage);
    virtual Email operator=(const Email & e);
private:
    string emailAddress;
    string emailSubject;
};

#endif	/* EMAIL_H */
