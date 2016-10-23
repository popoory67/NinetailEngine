#pragma once

class Message;		// pointer�θ� ���Ǳ� ������ include ��� ���� ����

using FuncVoid = function< void() >;	// �μ��� ���� �Լ���
using FuncMessage = function< void( Message* ) >;	// �μ��� �޽����� �Լ���

using MessageVectorFuncVoid = map< string, vector< FuncVoid > >;
using MessageVectorFuncMessage = map< string, vector< FuncMessage > >;


class MessageDispatcher
{
public:

	~MessageDispatcher();

	static MessageDispatcher* Get();

	// �޽��� Ŭ�������� �޽����� ������ �Ŀ� ȣ��
	void AddObserver( string key, FuncVoid func );
	void AddObserver( string key, FuncMessage func );

	// ���� �������� ȣ��
	void SendMessage( string key );
	void SendMessage( string key, Message* message );

private:

	MessageDispatcher();

private:

	static MessageDispatcher*	_instance;

	MessageVectorFuncVoid		_messageVectorVoid;
	MessageVectorFuncMessage	_messageVectorMessage;

};
