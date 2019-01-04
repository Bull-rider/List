/****************************************
 File Name: circle.cpp
# Author:yxg
# mail:yxi7899@gmail.com
# Created Time: Fri 04 Jan 2019 08:42:43 PM CST
 ****************************************/
//判断一个链表是否有环，并找到环的入口
bool Circle(ListNode *head)
{
	ListNode *p1=head;
	ListNode *p2=head;
	while(p1->Next!=NULL)
	{
		p1=p1->Next->Next;
		p2=p2->Next;
		if(p1==p2)
		{
			return true;
		}
	}
	if(p1->Next==NULL)
		return false;
}
//寻找环的入口
ListNode *startCircle(ListNode *head)
{
	ListNode *p1=head;
	ListNode *p2=head;
	while(p1->Next!=NULL)
	{
		p1=p1->Next->Next;
		p2=p2->Next;
		if(p1==p2)
		{
			return true;
		}
	}
	if(p1->Next==NULL)
		return false;
	p1=head;
	while(p1!=p2)
	{
		p1=p1->Next;
		p2=p2->Next;
	}
	return p2;
}
