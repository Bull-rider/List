/****************************************
 File Name: PrintListReverse.cpp
# Author:yxg
# mail:yxi7899@gmail.com
# Created Time: Mon 07 Jan 2019 04:21:47 PM CST
 ****************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <stack>
using std::cout;
using std::endl;

//利用栈的特性
void PrintListReverse(ListNode *pHead)
{
	std::stack<ListNode *> nodes;
	ListNode *pNode=pHead;
	while(pNode!=nullptr)
	{
		nodes.push(pNode);
		pNode=pNode->m_pNext;
	}
	while(!nodes.empty())
	{
		pNode=nodes.top();
		cout<<pNode->m_nValue<<" ";
		nodes.pop();
	}
}

//利用递归的思想
void PrintListReverse(ListNode *pHead)
{
	ListNode *node=pHead;
	if(node!=nullptr)
	{
		if(node->pNext!=nullptr)
		{
			PrintListReverse(node->m_pNext);
		}
		cout<<node->m_nValue<<" ";
	}
}
