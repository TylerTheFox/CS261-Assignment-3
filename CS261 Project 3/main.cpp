/*
 * File:   main.cpp
 * Author: brandan
 *
 * Created on February 3, 2015, 11:56 AM
 */
using namespace std;
#include "AddressBook.h"
#include "Mailbox.h"
#include <iostream>

int main(int argc, char** argv) {
	AddressBook AddrBook;
	AddrBook.addContact("Brandan", "admin@brandanlasley.com", AddressBook::EmailCont);
	AddrBook.addContact("Brandan", "admin@brandanlasley.com", AddressBook::EmailCont);
	AddrBook.addContact("Brandan", "admin@brandanlasley.com", AddressBook::EmailCont);
	AddrBook.addContact("Brandan", "admin@brandanlasley.com", AddressBook::EmailCont);
	AddrBook.displayContacts();


	/*Mailbox asdf;
	asdf.writeMessage("1", "2", "3", "4", Mailbox::EmailMsg);
	asdf.displayMessages();
	*/

	//Linklist<TxtContact> asdf;
	//TxtContact TextContactTest("Brandan Lasley", "5039293771");
	//asdf.insert(&TextContactTest);
	//asdf.display();

	/*cout << "Type: Text Message" << endl;
	Text	TextMessageTest("5039958473", "5039293771", "Hello My Name Is Brandan!");
	TextMessageTest.print();*/

	/*cout << "Type: Email Message" << endl;
	Email EmailMessageTest("Project 3", "ceo@brandanlasley.com", "admin@brandanlasley.com", "You're Fired!");
	EmailMessageTest.print();

	cout << "Type: FaceBook Message" << endl;
	Facebook FBMessage("david.platt", "brandan.lasley", "This seems to work OK.");
	FBMessage.print();

	cout << endl << "========== CONTACT ==========" << endl;

	cout << "Type: Text Contact" << endl;
	TxtContact TextContactTest("Brandan Lasley", "5039293771");
	TextContactTest.print();

	cout << endl << "Type: Email Contact" << endl;
	EmailContact EmailContactTest("Brandan Lasley", "admin@brandanlasley.com");
	EmailContactTest.print();

	cout << endl << "Type: FaceBook Contact" << endl;
	FBContact FaceBookContactTest("Brandan Lasley", "brandan.lasley");
	FaceBookContactTest.print();*/

	cin.get();
	return 0;
}

